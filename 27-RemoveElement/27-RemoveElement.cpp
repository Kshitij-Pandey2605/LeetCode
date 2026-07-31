// Last updated: 7/31/2026, 9:24:57 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i =0;i<nums.size();++i){
            if(nums[i]!=val){
                nums[k]=nums[i];
                ++k;
            }
        }
        return k;
    }
};