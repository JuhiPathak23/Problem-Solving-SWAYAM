class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>result;
        if(root==NULL) return result;
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto t=q.front();
            q.pop();
            Node* node=t.first;
            int vertical= t.second;
            mp[vertical]=node->data;
            if(node->left!=NULL)    q.push({node->left,vertical-1});
            if(node->right!=NULL)    q.push({node->right,vertical+1});
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
    }

};
