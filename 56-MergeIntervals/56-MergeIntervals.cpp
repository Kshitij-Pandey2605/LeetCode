// Last updated: 8/31/2026, 3:26:10 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        
5        sort(intervals.begin(),intervals.end());
6         vector<vector<int>> ans;
7         ans.push_back(intervals[0]);
8
9        for(int i=1;i<intervals.size();++i){
10            vector<int>current=intervals[i];
11             if(ans.back()[1]>=current[0]){
12                int start=min(ans.back()[0],current[0]);
13                int end=max(ans.back()[1],current[1]);
14
15                ans.back()[0]=start;
16                ans.back()[1]=end;
17             }
18             else{
19                ans.push_back(current);
20             }
21
22        }
23        return ans ;
24    }
25};