// Last updated: 7/31/2026, 9:18:07 PM
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