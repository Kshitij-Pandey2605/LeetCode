// Last updated: 9/15/2026, 9:15:52 PM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4
5        int left = 0;
6        int right = nums.size() - 1;
7
8        while (left <= right) {
9
10            int mid = left + (right - left) / 2;
11
12            if (nums[mid] == target) {
13                return mid;
14            }
15            else if (nums[mid] < target) {
16                left = mid + 1;
17            }
18            else {
19                right = mid - 1;
20            }
21        }
22
23        return left;
24    }
25};