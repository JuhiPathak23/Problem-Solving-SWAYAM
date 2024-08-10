class Solution {
public:
    void solve(vector<int>&array, TreeNode* root){
        if(root==NULL)  return;
        
        solve(array,root->left);
        array.push_back(root->val);
        solve(array, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        solve(result,root);
        return result;
        
    }
};
