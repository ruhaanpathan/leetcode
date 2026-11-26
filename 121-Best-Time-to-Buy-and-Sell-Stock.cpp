class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = INT_MAX;
        int ans = 0;
        for (int price : prices) {
            i = min(i, price);
            int profit = price - i;
            ans = max(ans, profit);
        }

        return ans;
    }
};