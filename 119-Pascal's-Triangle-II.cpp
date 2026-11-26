class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> val;
        long long curr = 1;
        val.push_back(curr);
        for(int i = 1; i <= rowIndex; i++){
            curr = (curr * (rowIndex - i + 1)) / i;
            val.push_back(curr);
        }

        return val;
        
    }
};