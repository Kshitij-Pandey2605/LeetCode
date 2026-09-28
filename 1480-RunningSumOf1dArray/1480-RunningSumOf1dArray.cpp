// Last updated: 9/28/2026, 3:15:20 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i = 1; i < nums.size(); ++i){

            nums[i] = nums[i] + nums[i-1];
        }

        return nums;
    }
};