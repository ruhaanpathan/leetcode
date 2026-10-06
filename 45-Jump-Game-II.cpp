class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1){
            return 0;
        }
        int m=0,j=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            m=max(m,i+nums[i]);
            if(i==count){
                j++;
                count=m;

                if(count>=nums.size()-1){
                    break;
                }
            }
        }
        return j;
    }
};