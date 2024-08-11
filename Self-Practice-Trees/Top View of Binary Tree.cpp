class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
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
            if(mp.find(vertical)==mp.end()) mp[vertical]=node->data;
            if(node->left!=NULL)    q.push({node->left,vertical-1});
            if(node->right!=NULL)    q.push({node->right,vertical+1});
        }
        for(auto it:mp){
            result.push_back(it.second);
        }
        return result;
    }

};
