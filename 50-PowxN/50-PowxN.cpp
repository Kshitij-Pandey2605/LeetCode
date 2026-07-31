// Last updated: 7/31/2026, 9:24:41 PM
class Solution {
public:

    double myPow(double x, int n) {

        long long power = n;

        // negative power handle
        if(power < 0){
            x = 1 / x;
            power = -power;
        }

        double ans = 1;

        while(power > 0){

            // odd power
            if(power % 2 == 1){
                ans = ans * x;
            }

            x = x * x;

            power = power / 2;
        }

        return ans;
    }
};