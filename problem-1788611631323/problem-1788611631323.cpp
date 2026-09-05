// Last updated: 9/5/2026, 6:03:51 PM
1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int single = 0;
5        int doub = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8            if(nums[i] < 10) {
9                single += nums[i];
10            }
11            else {
12                doub += nums[i];
13            }
14        }
15
16        return single != doub;
17    }
18};