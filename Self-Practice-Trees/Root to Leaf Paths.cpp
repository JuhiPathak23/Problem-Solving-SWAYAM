class Solution {
public:
    void solve(TreeNode* root,vector<string>&v,string path){
        if(root==NULL)  return;
        if(root->left==NULL && root->right==NULL){
            path+=to_string(root->val);
            v.push_back(path);
            return;
        }
        path+=(to_string(root->val))+"->";
        solve(root->left,v,path);
        solve(root->right,v,path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        solve(root,res,"");
        return res;
    }
};
