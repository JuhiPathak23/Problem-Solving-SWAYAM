class Solution {
public:
    void solve(vector<int>&array, TreeNode* root){
        if(root==NULL)  return;
        array.push_back(root->val);
        solve(array,root->left);
        solve(array, root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        solve(result,root);
        return result;
        
    }
};
