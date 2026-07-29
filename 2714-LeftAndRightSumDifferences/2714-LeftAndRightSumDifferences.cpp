// Last updated: 7/29/2026, 4:07:39 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int total = 0;

        // total sum
        for(int x : nums){
            total += x;
        }

        vector<int> ans;

        int leftSum = 0;

        for(int i = 0; i < nums.size(); ++i){

            int rightSum = total - leftSum - nums[i];

            ans.push_back(abs(leftSum - rightSum));

            leftSum += nums[i];
        }

        return ans;
    }
};