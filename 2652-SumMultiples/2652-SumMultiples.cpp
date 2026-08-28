// Last updated: 8/28/2026, 9:49:33 PM
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        int sum =0;
5
6        for(int i=1;i<=n;i++){
7            if(i%3==0||i%5==0||i%7==0){
8                sum+=i;
9            }
10            else{continue;}
11        }
12        return sum;
13    }
14};