class Solution {
public:
    string removeOuterParentheses(string s) {
        string a;
        int sub = 0;
        for (char c:s) {
            if (c=='(') {
                if (sub>0){
                    a += c;
                }
                sub++;
            } 
            else {
                sub--;
                if(sub>0){
                    a += c;
                }
            }
        }

        return a;

        }
};