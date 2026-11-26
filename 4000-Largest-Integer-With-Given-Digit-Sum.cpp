class Solution {
public:
    int largestInteger(int n, int s) {
        int ans =0;
        if(n*9 <s ){
            return -1;
        }
        if(s==0){
            return 0;
        }
        while(s!=0){
            if(s-9>0){
                ans = ans *10 +9;
                s=s-9;
            }
            else {
                ans= ans *10 +s;
                s=0;
            }
            
            n--;
        }
        while(n!=0){
            ans=ans*10;
            n--;
        }
        return ans;
    }
};