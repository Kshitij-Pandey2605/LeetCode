// Last updated: 8/18/2026, 1:22:03 PM
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        int count =0;
5       int i=0;
6        while( i<nums.size()-1){
7            if(nums[i]<nums[i+1]){
8                i++;
9
10            }
11            else{
12                nums[i+1]++;
13                count++;
14            }
15        }
16        return count;
17    }
18}; 