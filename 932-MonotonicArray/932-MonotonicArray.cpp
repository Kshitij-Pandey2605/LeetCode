// Last updated: 7/31/2026, 9:19:14 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true;
        bool dec = true;
        for(int i=0;i<nums.size()-1;++i){
            
            if(nums[i]> nums[i+1]){
             inc = false;
            }
            if(nums[i]< nums[i+1]){
                dec=false;
            }
        }
       return inc || dec;
    }
};