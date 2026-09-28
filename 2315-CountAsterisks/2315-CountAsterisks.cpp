// Last updated: 9/28/2026, 3:12:57 PM
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insidePipe = false;

        for (char ch : s) {
            if (ch == '|') {
                insidePipe = !insidePipe;
            }
            else if (ch == '*' && !insidePipe) {
                count++;
            }
        }

        return count;
    }
};