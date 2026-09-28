// Last updated: 9/28/2026, 3:14:54 PM
class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;

        while (n > 1) {
            if (n % 2 == 0) {
                int match = n / 2;
                count += match;
                n = match;
            } else {
                int match = (n - 1) / 2;
                count += match;
                n = match + 1;
            }
        }
//also we can dirrect return n-1 ;
        return count;
    }
};