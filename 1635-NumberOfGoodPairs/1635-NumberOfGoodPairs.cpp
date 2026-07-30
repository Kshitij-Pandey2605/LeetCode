// Last updated: 7/30/2026, 5:12:05 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        for(int i = 0; i < nums.size(); ++i) {

            for(int j = i + 1; j < nums.size(); ++j) {

                if(nums[i] == nums[j]) {
                    count++;
                }

            }
        }

        return count;
    }
};