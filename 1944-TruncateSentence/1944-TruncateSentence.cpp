// Last updated: 7/29/2026, 4:08:35 PM
class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string h = "";

        for(int i = 0; i < s.length(); ++i){
            if(s[i] == ' '){
                count++;
                if(count == k){
                    break;
                }
            }
            h += s[i];
        }
        return h;
    }
};