class Solution {
public:
    int candy(vector<int>& rate) {
        int n =rate.size();
        vector<int> can(n, 1);
        for (int i=1;i<n;i++) {
            if (rate[i] >rate[i - 1]) {
                can[i]=can[i-1]+1;
            }
        }
        for (int i=n-2;i>=0;i--) {
            if (rate[i]>rate[i+1]) {
                can[i] =max(can[i],can[i+1]+1);
            }
        }
        int cnt =0;
        for (int x: can) {
            cnt+=x;
        }
        return cnt;
    }
};