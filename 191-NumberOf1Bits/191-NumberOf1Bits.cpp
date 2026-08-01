// Last updated: 8/2/2026, 3:28:21 AM
class Solution {
public:

    int hammingWeight(int n) {

        int count = 0;

        while(n != 0){

            if(n % 2 == 1){
                count++;
            }

            n = n / 2;
        }

        return count;
    }
};