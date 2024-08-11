class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>mp;
        queue<pair<TreeNode*, pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto t=q.front();
            q.pop();
            TreeNode* node=t.first;
            int vertical=t.second.first, level=t.second.second;
            mp[vertical][level].insert(node->val);
            if(node->left)  q.push({node->left,{vertical-1,level+1}});
            if(node->right)  q.push({node->right,{vertical+1,level+1}});
        }
        vector<vector<int>>result;
        for(auto t:mp) {
            vector<int>col;
            for(auto p:t.second) {
                col.insert(col.end(),p.second.begin(),p.second.end());
            }
            result.push_back(col);
        }
        return result;
    }
};
