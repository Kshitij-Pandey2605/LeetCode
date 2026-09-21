// Last updated: 9/21/2026, 12:01:13 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4         if(n==1){return 1;};
5         if(n==2){return 2;};
6
7         int prev1 =1;
8         int prev2=2;
9
10         for(int i=3;i<=n;i++){
11            int c = prev1 +prev2;
12             prev1=prev2;
13             prev2=c;
14         }
15         return prev2 ;
16
17
18
19
20    }
21};