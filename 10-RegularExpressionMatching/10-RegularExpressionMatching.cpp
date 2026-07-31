// Last updated: 7/31/2026, 9:25:26 PM
class Solution {
public:

    bool solve(int i, int j, string &s, string &p) {

        // pattern finished
        if(j == p.length()) {
            return i == s.length();
        }

        // current char match
        bool match = (i < s.length() &&
                     (s[i] == p[j] || p[j] == '.'));

        // check for *
        if(j + 1 < p.length() && p[j + 1] == '*') {

            // skip OR use
            return solve(i, j + 2, s, p) ||

                   (match && solve(i + 1, j, s, p));
        }

        // normal move
        if(match) {
            return solve(i + 1, j + 1, s, p);
        }

        return false;
    }

    bool isMatch(string s, string p) {

        return solve(0, 0, s, p);
    }
};