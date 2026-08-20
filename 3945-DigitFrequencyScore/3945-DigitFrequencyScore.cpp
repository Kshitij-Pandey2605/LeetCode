// Last updated: 8/20/2026, 2:06:24 PM
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4        unordered_map<int,int>freq;
5         
6         int sum=0;
7
8        while(n!=0){
9            int x=n%10;
10            freq[x]++;
11            n=n/10;
12        }
13
14        for(auto it : freq){
15            sum+=it.first*it.second;
16        }
17        return sum;
18        
19
20    }
21};