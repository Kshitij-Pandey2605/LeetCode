// Last updated: 7/29/2026, 4:07:55 PM
class Solution {
public:
    bool sumOfNumberAndReverse(int num) {

        for(int i = 0; i <= num; ++i){

            int temp = i;
            int rev = 0;

            // reverse number
            while(temp > 0){

                int digit = temp % 10;

                rev = rev * 10 + digit;

                temp = temp / 10;
            }

            if(i + rev == num){
                return true;
            }
        }

        return false;
    }
};