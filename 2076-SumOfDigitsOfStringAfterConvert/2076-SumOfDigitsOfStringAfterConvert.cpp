// Last updated: 7/29/2026, 4:08:21 PM
class Solution {
public:
    int getLucky(string s, int k) {
        string num = "";

        // Step 1: convert chars to numbers
        for(char ch : s) {
            num += to_string(ch - 'a' + 1);
        }

        int sum = 0;

        // Step 2: repeat k times
        while(k--) {

            sum = 0;

            for(char ch : num) {
                sum += ch - '0';
            }

            num = to_string(sum);
        }

        return sum;
        }
    
};