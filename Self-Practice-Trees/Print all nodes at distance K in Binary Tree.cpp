class Solution {
public:
    void isparent(TreeNode* root, unordered_map<TreeNode*, TreeNode*> &mp, TreeNode* target){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left){
                mp[cur->left]=cur;
                q.push(cur->left);
            }
            if(cur->right){
                mp[cur->right]=cur;
                q.push(cur->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*>mp;
        isparent(root,mp,target);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int level=0;
        while(!q.empty()){
            int size=q.size();
            if(level++==k) break;
            for (int i=0; i<size; i++) {
                TreeNode* cur=q.front();
                q.pop();
                if(cur->left && !visited[cur->left]){
                    q.push(cur->left);
                    visited[cur->left]=true;
                }
                if(cur->right && !visited[cur->right]){
                    q.push(cur->right);
                    visited[cur->right]=true;
                }
                if(mp[cur] && !visited[mp[cur]]){
                    q.push(mp[cur]);
                    visited[mp[cur]]=true;
                }
            }
        }
        vector<int>result;
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            result.push_back(cur->val);
        }
        return result;
    }
};
