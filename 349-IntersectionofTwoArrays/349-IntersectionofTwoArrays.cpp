// Last updated: 9/19/2026, 12:35:46 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int>common;
5        vector<int>result;
6
7        for(int x:nums1){
8            common.insert(x);
9        }
10        for(int x:nums2){
11            if(common.find(x)!=common.end()){
12                result.push_back(x);
13                common.erase(x);
14            }
15        }
16        return result;
17      
18
19    }
20};