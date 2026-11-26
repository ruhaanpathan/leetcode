class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long s=0;
        for(int i : chalk){
            s+=i;
        }
        long long rem = k%s;
        for(int i =0;i<chalk.size();i++){
            if(rem<chalk[i]) return i;
            rem-=chalk[i];
        }
        return 0;
    }

};