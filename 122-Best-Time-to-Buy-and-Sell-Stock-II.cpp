class Solution {
public:
    int maxProfit(vector<int>& num) {
         int pro = 0;
        for (int i =1;i<num.size();i++) {
            if (num[i]>num[i-1]) {
                pro+=num[i]-num[i-1];
            }
        }

        return pro;
    }
};