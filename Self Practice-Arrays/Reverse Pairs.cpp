class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count=0, n=nums.size();
        vector<long long> pairs;
        for (int i=n-1; i>=0; i--) {
            count+=lower_bound(pairs.begin(),pairs.end(),nums[i]) - pairs.begin();
            pairs.insert(lower_bound(pairs.begin(),pairs.end(), 2LL*nums[i]), 2LL*nums[i]);
        }
        return count;
    }
};
