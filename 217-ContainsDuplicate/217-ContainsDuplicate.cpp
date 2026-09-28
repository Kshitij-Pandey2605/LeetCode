// Last updated: 9/28/2026, 3:11:32 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_map<int,int>map;
5
6        for(int i=0;i<nums.size();++i){
7          map[nums[i]]++;
8          if(map[nums[i]]==2||map[nums[i]]>2){
9            return true;
10          }
11         
12        }
13        return false;
14        
15    }
16};