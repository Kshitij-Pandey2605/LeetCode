// Last updated: 7/29/2026, 4:08:28 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        
        int n = count(s.begin(), s.end(), ' ') + 1;
        vector<string> ans(n);

        while (ss >> word) {
            int pos = word.back() - '0';
            word.pop_back();
            ans[pos - 1] = word;
        }

        string result = "";

        for (int i = 0; i < n; i++) {
            result += ans[i];
            if (i != n - 1) result += " ";
        }

        return result;
    }
};