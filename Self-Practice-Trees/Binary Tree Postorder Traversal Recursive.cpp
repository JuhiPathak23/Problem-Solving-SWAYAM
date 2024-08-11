class Solution {
public:
    void solve(vector<int>&array, TreeNode* root){
        if(root==NULL)  return;
        
        solve(array,root->left);
        solve(array, root->right);
        array.push_back(root->val);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        solve(result,root);
        return result;
        
    }
};
