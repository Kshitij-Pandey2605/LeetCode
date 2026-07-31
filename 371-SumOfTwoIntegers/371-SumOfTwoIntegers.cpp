// Last updated: 7/31/2026, 9:20:12 PM
class Solution {
public:
    int getSum(int a, int b) {

        while(b != 0){

            // carry nikalna
            unsigned int carry = (a & b);

            // bina carry ke addition
            a = a ^ b;

            // carry ko next position pe bhejna
            b = carry << 1;
        }

        return a;
    }
};