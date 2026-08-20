// Last updated: 8/20/2026, 1:52:25 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int sum=0;
5    for(int i =0;i<nums.size();i++){
6        sum+=nums[i];
7    }
8   return sum%k;
9
10
11   
12   return {};
13
14    }
15};