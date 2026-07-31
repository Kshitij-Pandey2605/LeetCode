// Last updated: 7/31/2026, 9:25:31 PM
class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        long long ans = 0;

        // STEP 1: skip spaces
        while(i < s.length() && s[i] == ' '){
            i++;
        }

        // STEP 2: check sign
        if(i < s.length() && (s[i] == '+' || s[i] == '-')){

            if(s[i] == '-'){
                sign = -1;
            }

            i++;
        }

        // STEP 3: number build
        while(i < s.length() && isdigit(s[i])){

            ans = ans * 10 + (s[i] - '0');

            // overflow check
            if(sign * ans > INT_MAX){
                return INT_MAX;
            }

            if(sign * ans < INT_MIN){
                return INT_MIN;
            }

            i++;
        }

        return sign * ans;
    }
};