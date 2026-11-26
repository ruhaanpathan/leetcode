class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> Arow(n, 1);

        for (int row = 1; row < m; row++) {
            vector<int> Crow(n,1);
            for (int col=1; col<n;col++) {
                Crow[col] =Crow[col-1]+Arow[col];
            }
            Arow = Crow;
        }

        return Arow[n - 1];        
    }
};