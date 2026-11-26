class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> fre;
        int mod;
        int max=0;
        for(int i : nums){
            fre[i]++;
            if(fre[i]>max){
                mod=i;
                max =fre[i];
            }
        }
        return mod;
    }
};