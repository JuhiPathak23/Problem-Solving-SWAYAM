class Solution {
  public:
    int solve(int n, vector<int>&dp, vector<int>&arr,int k){
        dp[0]=0;
        for(int i=1;i<n;i++){
            int minsteps=INT_MAX;
            for(int j=1;j<=k;j++){
                if(i-j>=0){
                    int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
                    minsteps=min(jump,minsteps);
                }
            }
            dp[i]=minsteps;
        }
        return dp[n-1];
    }
    int minimizeCost(vector<int>& arr, int& k) {
        // Code here
        int n=arr.size();
        vector<int>dp(n,-1);
        return solve(n,dp,arr,k);
    }
};
