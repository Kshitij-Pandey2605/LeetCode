// Last updated: 7/31/2026, 9:19:44 PM
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string result = "";

        while (ss >> word) {
            reverse(word.begin(), word.end()); // fix here
            result += word;
            result += ' ';
        }

        result.pop_back(); // last extra space remove

        return result;
    }
};