class Solution {
public:
    int index;
    map<int,int>m;
    TreeNode* bt(vector<int>& inorder,vector<int>& postorder,int x,int last,map<int, int>&p){
        if(x>last)
            return NULL;
        TreeNode* root=new TreeNode(postorder[index]);
        int position = m[postorder[index]];
        index--;

        root->right=bt(inorder,postorder,position+1,last,m);
        root->left=bt(inorder,postorder,x,position-1,m);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        index=inorder.size()-1;
        
        for(int i=0;i<inorder.size();i++)
            m[inorder[i]]=i;      
        return bt(inorder,postorder,0,inorder.size()-1,m);
        
    }
};
