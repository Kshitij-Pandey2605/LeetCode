// Last updated: 9/4/2026, 5:45:38 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n = height.size();
5        int right = n-1;
6        int left = 0;
7        int ans=0;
8
9        while (left < right){
10            int area=min(height[left],height[right])*(right-left);
11            ans=max(area,ans);
12
13            if(height[left]<height[right]){
14                left++;
15            }
16            else{right--;}
17        }
18        return ans;
19    }
20};