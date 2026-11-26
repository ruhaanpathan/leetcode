class Solution {
public:
    bool checkPerfectNumber(int num) {

        int ans =1;
        if( num == 1 ){
            return 0;
        }
        for(int i =2 ;i<sqrt(num) ; i++){
            if(num%i ==0){
                ans = ans + i + (num/i);
            }
        }
        
        return ans==num;
    }
};