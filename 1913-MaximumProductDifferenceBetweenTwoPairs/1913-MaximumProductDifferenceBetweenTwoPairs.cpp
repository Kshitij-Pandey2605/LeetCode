// Last updated: 8/2/2026, 3:19:20 AM
1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) {
4       sort(nums.begin(),nums.end());
5       int n =nums.size();
6       int ans =(nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
7
8       return ans;
9    }
10};