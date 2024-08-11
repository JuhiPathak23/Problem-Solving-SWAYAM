class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>result;
        stack<TreeNode*>st;
        if(root==NULL) return result;
        TreeNode* node=root;
        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()==true)    break;
                node=st.top();
                st.pop();
                result.push_back(node->val);
                node=node->right;
            }
        }
        return result;
    }
};
