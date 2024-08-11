class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        stack<TreeNode*>st1, st2;
        if(root==NULL) return result;
        st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL)    st1.push(root->left);
            if(root->right!=NULL)    st1.push(root->right);
        }
        while(!st2.empty()){
            result.push_back(st2.top()->val);
            st2.pop();
        }
        return result;
    }
};