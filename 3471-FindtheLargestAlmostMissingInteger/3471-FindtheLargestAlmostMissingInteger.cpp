// Last updated: 8/21/2026, 2:10:49 PM
1class Solution {
2public:
3    int largestInteger(vector<int>& nums, int k) {
4
5      unordered_map<int,int>freq;
6
7      int left=0;
8      int right =k-1;
9
10      while(right<nums.size()){
11        set<int>kb;
12        for(int i=left;i<=right;++i){
13                 kb.insert(nums[i]);
14                 
15        }
16        for(int x:kb){
17            freq[x]++;
18        }
19        left++;
20        right++;
21      }
22
23      int ans=-1;
24
25      for(auto it:freq){
26        if(it.second==1){
27        ans=max(ans,it.first);
28      }
29      }
30
31
32     return ans;
33        
34    }
35};