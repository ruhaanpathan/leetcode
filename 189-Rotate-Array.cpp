typedef vector<int> vi;

class Solution {
public:
    void rotate(vi& nums, int k) {
        int n = nums.size();
        k %= n;
        // backup of k elem
        vi backup(k);
        for(int i = n-k; i < n; i++) {
            backup[i-(n-k)] = nums[i];
        }

        // shift (n-k) right
        for(int i = n-1-k; i >= 0; i--) {
            nums[i+k] = nums[i];
        }

        // insert the k back
        for(int i = 0; i < k; i++) {
            nums[i] = backup[i];
        }
    }
};