// Last updated: 9/6/2026, 6:38:02 PM
1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4
5        if(arr.size()<3){return false;}
6
7        for(int i=0;i<arr.size()-2;i++){
8            if(arr[i]%2!=0&&arr[i+1]%2!=0&&arr[i+2]%2!=0){
9               return true;
10            }
11          
12        }
13        return false;
14    }
15};