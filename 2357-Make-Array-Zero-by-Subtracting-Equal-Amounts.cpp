class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> a;
        for(int i:nums){
            if( i!=0){
            a.insert(i);}
        }
        return a.size();
    }
};