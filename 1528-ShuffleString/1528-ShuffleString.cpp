// Last updated: 8/30/2026, 2:18:10 AM
1class Solution {
2public:
3    string restoreString(string s, vector<int>& indices) {
4
5        vector<char> sd(s.size());
6
7        for(int i = 0; i < s.length(); ++i) {
8            sd[indices[i]] = s[i];
9        }
10
11        string k;
12
13        for(int i = 0; i < sd.size(); i++) {
14            k.push_back(sd[i]);
15        }
16
17        return k;
18    }
19};