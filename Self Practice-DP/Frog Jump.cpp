class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int prev1=0,prev2=0;
        for(int i=1; i<n; i++) {
            int first= prev1 + abs(height[i] - height[i-1]);
            int second= INT_MAX;
            if(i>1) second=prev2+abs(height[i]-height[i-2]);
            int current=min(first,second);
            prev2=prev1;
            prev1=current;
        }
        return prev1;
    }
};
