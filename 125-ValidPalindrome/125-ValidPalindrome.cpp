// Last updated: 7/31/2026, 9:23:54 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string clean;

        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

        int left = 0, right = clean.length() - 1;

        while (left < right) {
            if (clean[left] != clean[right]) return false;
            left++;
            right--;
        }

        return true;
    }
};