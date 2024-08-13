class Solution {
public:
    vector<vector<int>> solve(int rows) {
        vector<vector<int>> result(rows);
        for (int i=0; i<rows; i++) {
            result[i].resize(i+1,1);
            for (int j=1; j<i; j++) {
                result[i][j]= result[i-1][j-1] + result[i-1][j];
            }
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle= solve(numRows);
        return triangle;
    }
};
