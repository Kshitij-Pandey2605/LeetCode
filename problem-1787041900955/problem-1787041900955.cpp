// Last updated: 8/18/2026, 2:01:40 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count = 0;
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] <= nums[i - 1]) {
8                count += nums[i - 1] - nums[i] + 1;
9                nums[i] = nums[i - 1] + 1;
10            }
11        }
12
13        return count;
14    }
15};