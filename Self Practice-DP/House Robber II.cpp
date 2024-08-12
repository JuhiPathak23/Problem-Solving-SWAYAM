class Solution {
public:
    long long int solve(vector<int>& arr){
        int n=arr.size();
        long long int prev1=arr[0], prev2=0;
        for (int i=1;i<n;i++) {
            long long int pick= arr[i];
            if(i>1) pick+=prev2;
            long long int notpick= prev1;
            long long int current=max(pick,notpick);
            prev2=prev1;
            prev1=current;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        vector<int>array1;
        vector<int>array2;
        if(nums.size()==1) return nums[0];
        for(int i=0;i<nums.size();i++) {
            if(i!=0) array1.push_back(nums[i]);
            if(i!=nums.size()-1) array2.push_back(nums[i]);
        }
        long long int res1=solve(array1), res2=solve(array2);
        return max(res1, res2);
    }
};
