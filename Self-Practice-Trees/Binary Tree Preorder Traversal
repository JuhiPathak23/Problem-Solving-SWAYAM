class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>result;
        stack<TreeNode*>st;
        if(root==NULL) return result;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            if(node->right!=NULL)   st.push(node->right);
            if(node->left!=NULL)   st.push(node->left);
            result.push_back(node->val);
        }
        return result;
    }
};
