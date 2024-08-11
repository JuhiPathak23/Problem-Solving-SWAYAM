class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int width=0;
        if(root==NULL) return 0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            long long w=q.front().second;
            int first,last;
            for (int i=0; i<size; i++) {
                long long current=q.front().second-w;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0) first=current;
                if(i==size-1) last=current;
                if(node->left) q.push({node->left,current*2 +1});
                if(node->right) q.push({node->right,current*2 +2});
            }
            width=max(width, last-first+1);
        }
        return width;
    }
};
