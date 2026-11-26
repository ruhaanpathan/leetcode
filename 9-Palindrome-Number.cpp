class Solution {
public:
    bool isPalindrome(int x) {
        int a =0;
        int cop = x;
        if(x<0){
            return false;
        }
        while(x!=0){
            if (a>INT_MAX/10||(a==INT_MAX/ 10 && x >7)) 
            {
                return 0;
            }
            if (a<INT_MIN/10 || (a==INT_MIN/10&&x <-8)) {
                return 0;
            }
            a= a*10 +(x%10);
            x/=10;
        }
        return (a==cop);
    }
};