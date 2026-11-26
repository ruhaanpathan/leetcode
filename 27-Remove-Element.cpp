class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        int k=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==val){ 
                cnt++;
                continue;
            }
            if(nums[i]!=val){
                swap(nums[i],nums[k]);
                k++;
            }
        }
        return nums.size()-cnt;
    }
};