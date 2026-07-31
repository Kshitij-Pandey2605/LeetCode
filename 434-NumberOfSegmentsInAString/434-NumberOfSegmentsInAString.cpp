// Last updated: 7/31/2026, 9:19:56 PM
class Solution {
public:
    int countSegments(string s) {

        int count = 0;

        for(int i = 0; i < s.length(); ++i){

            if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')){
                count++;
            }
        }

        return count;
    }
};