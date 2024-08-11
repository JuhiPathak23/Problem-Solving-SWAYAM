class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        return solve(preorder,0,n-1,inorder,0,n-1);
    }
    
    TreeNode* solve(vector<int>&pre,int preLow,int preHigh,vector<int>&in,int inLow,int inHigh){
        if(preLow > preHigh || inLow > inHigh) return NULL; 
        TreeNode*root=new TreeNode(pre[preLow]);
        if(preLow == preHigh) return root;
        int i=inLow;
        while(i <= inHigh){
            if(in[i]==pre[preLow]) break;
            i++;
        }
        int leftCount = i-inLow;
        int rightCount = inHigh-1;
        root->left = solve(pre, preLow+1, preLow+leftCount, in, inLow, i-1);
        root->right = solve(pre, preLow+leftCount+1, preHigh, in, i+1, inHigh);
        return root;
    }
};
