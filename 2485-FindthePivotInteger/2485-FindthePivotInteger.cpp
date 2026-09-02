// Last updated: 9/2/2026, 10:25:19 AM
1class Solution {
2public:
3    int pivotInteger(int n) {
4        
5        int total = n*(n+1)/2;
6        
7
8        for(int i=1;i<=n;++i){
9             int left = i*(i+1)/2;
10             int right = total-(i-1)*i/2;
11
12             if(left==right){
13                return i;
14             }
15             else{continue;}
16        }
17
18               return -1;     
19    }
20};