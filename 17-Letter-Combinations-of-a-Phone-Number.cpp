typedef vector<char> vc;
typedef unordered_map<int, vc> umivc;

class Solution {
    umivc phone;
public:
    Solution() {
        for(int k = 2; k <= 6; k++) {
            for(int i = 2; i >= 0; i--) {
                phone[k].push_back(93+3*k-i);
            }
        }
        // phone[2] = {'a','b','c'};
        // phone[3] = {'d','e','f'};
        // phone[4] = {'g','h','i'};
        // phone[5] = {'j','k','l'};
        // phone[6] = {'m','n','o'};
        phone[7] = {'p','q','r', 's'};
        phone[8] = {'t','u','v'};
        phone[9] = {'w','x','y', 'z'};
    }
    vector<string> letterCombinations(string digits) {
        // cout<<phone[6][0];
        vector<string> ans = {""};
        for(char digit : digits) { // d
            vector<string> temp;
            for(string str: ans) {
                for(char alpha:phone[digit-'0']) {
                    temp.push_back(str+alpha);
                }
            }
            ans = temp;
        }
        return ans;
    }
};