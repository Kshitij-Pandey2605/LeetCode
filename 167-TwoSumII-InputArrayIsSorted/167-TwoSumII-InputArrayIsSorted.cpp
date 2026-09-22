// Last updated: 9/22/2026, 11:32:33 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        vector<int>ans ;
5
6        int left=0;
7        int right = numbers.size()-1;
8
9       while(right>left){
10
11        int sum = numbers[left]+numbers[right];
12              
13              if(sum==target){
14                ans.push_back(left+1);
15                ans.push_back(right+1);
16                 break;
17              }
18              else if( sum<target){
19                left++;
20                
21              }
22              else{right--;}
23       }
24       return ans;
25    }
26};