class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> val(numRows);
        for(int i=0; i<numRows; i++){
            val[i].resize(i+1, 1);
            for(int j=1; j<i; j++){
                val[i][j] = val[i-1][j-1] + val[i-1][j];
            }
        }
        return val;
    }
};