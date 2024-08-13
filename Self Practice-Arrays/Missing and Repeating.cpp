class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>v(n+1,0);
        for(int i=0;i<n;i++) v[arr[i]]++;
        int rep=-1,mis=-1;
        for(int i=1;i<=n;i++){
        if(v[i]==0) mis=i;
        else if(v[i]==2) rep=i;}
        return {rep,mis};
    }
};
