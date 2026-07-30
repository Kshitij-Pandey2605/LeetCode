// Last updated: 7/30/2026, 5:12:37 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        for(int i = 1; i < nums.size(); ++i){

            nums[i] = nums[i] + nums[i-1];
        }

        return nums;
    }
};