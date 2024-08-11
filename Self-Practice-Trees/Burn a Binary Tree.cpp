class Solution {
  public:
    void dfs(map<int, vector<int>> &mp, vector<int> &vis, int &mx, int depth, int node){
        vis[node]=1;
        mx = max(mx, depth);
        vector<int> temp = mp[node];
        for(int i=0; i<temp.size(); i++){
            if(vis[temp[i]]==0)
                dfs(mp, vis, mx, depth+1, temp[i]);
        }
        
    }
  
    int minTime(Node* root, int target) {
        // Your code goes here
        map<int,vector<int>> mp;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node * node = q.front();
            q.pop();
            
            if(node->left){
                mp[node->data].push_back(node->left->data);
                mp[node->left->data].push_back(node->data);
                q.push(node->left);
            }
            
            if(node->right){
                mp[node->data].push_back(node->right->data);
                mp[node->right->data].push_back(node->data);
                q.push(node->right);
            }
        }
        vector<int> vis (10001, 0);
        int mx=0;
        dfs(mp, vis, mx, 0, target);
        return mx;
    }
};
