// Last updated: 7/29/2026, 4:08:02 PM
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