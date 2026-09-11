// Last updated: 9/11/2026, 8:15:12 PM
1class Solution {
2public:
3    int residuePrefixes(string s) {
4        unordered_set<int>hh;
5        int ans=0;
6
7        for(int i =0;i<s.length();++i){
8          hh.insert(s[i]);
9          if(hh.size()==(i+1)%3){
10            ans++;
11          }
12
13        }
14        return ans;;
15    }
16};