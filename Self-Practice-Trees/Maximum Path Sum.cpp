class Solution {
public:
    int solve(TreeNode* root,int& maxpathsumval){
        if(root==NULL) return 0;
        int leftsum=max(0,solve(root->left,maxpathsumval));
        int rightsum=max(0,solve(root->right,maxpathsumval));
        maxpathsumval=max(maxpathsumval, leftsum+rightsum+root->val);
        return max(leftsum,rightsum)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxpathsumval=INT_MIN;
        solve(root,maxpathsumval);
        return maxpathsumval;
    }
};
