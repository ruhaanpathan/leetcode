class Solution {
public:
    int fib(int n) {
        if(n ==0){
            return 0;
        }
        if(n ==1){
            return 1;
        }
        int j =0;
        int q=1;
        for(int i =2;i<=n;i++){
            int curr = j+q;
            j=q;
            q=curr;
        }
        return q;
    }
};