// Last updated: 7/31/2026, 9:20:01 PM
class Solution {
public:

    string solve(string& s, int& i) {

        string result = "";

        while(i < s.length() && s[i] != ']') {

            // Normal character
            if(isalpha(s[i])) {
                result += s[i];
                i++;
            }

            // Number found
            else if(isdigit(s[i])) {

                int num = 0;

                while(i < s.length() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                // Skip '['
                i++;

                // Decode inner string
                string inner = solve(s, i);

                // Skip ']'
                i++;

                // Repeat inner string num times
                while(num--) {
                    result += inner;
                }
            }
        }

        return result;
    }

    string decodeString(string s) {

        int i = 0;

        return solve(s, i);
    }
};