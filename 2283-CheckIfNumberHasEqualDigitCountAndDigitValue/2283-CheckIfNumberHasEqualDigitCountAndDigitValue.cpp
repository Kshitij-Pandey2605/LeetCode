// Last updated: 9/28/2026, 3:13:08 PM
class Solution {
public:
    bool digitCount(string num) {
        int freq[10]={0};

        for(int i=0;i<num.length();++i){
            freq[num[i]-'0']++;
        }

        for(int i=0;i<num.length();++i){
            int expected = num[i]-'0';
            int actual = freq[i];

            if(expected!=actual){
                return false;

            }
        }
        return true;

    }
};