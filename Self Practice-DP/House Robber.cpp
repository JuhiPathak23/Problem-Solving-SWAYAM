class Solution {
public:
    int solve(vector<int>&dp, vector<int>&nums, int i){
        if(i>= nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int pick= nums[i] + solve(dp,nums,i+2);
        int notpick = solve(dp,nums,i+1);
        return dp[i]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return solve(dp,nums,0);
    }
};
