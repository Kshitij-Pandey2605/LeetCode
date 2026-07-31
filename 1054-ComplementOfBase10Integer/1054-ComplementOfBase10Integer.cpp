// Last updated: 7/31/2026, 9:19:02 PM
class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0){
            return 1;
        }

        string num;

        // decimal -> binary
        while(n != 0){
            num += (n % 2) + '0';
            n = n / 2;
        }

        // flip bits
        for(int i = 0; i < num.length(); ++i){

            if(num[i] == '1'){
                num[i] = '0';
            }
            else{
                num[i] = '1';
            }
        }

        // binary -> decimal
        int ans = 0;
        int power = 1;

        for(int i = 0; i < num.length(); ++i){

            if(num[i] == '1'){
                ans += power;
            }

            power *= 2;
        }

        return ans;
    }
};