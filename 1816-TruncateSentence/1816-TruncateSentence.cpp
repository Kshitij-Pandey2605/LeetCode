// Last updated: 9/28/2026, 3:14:22 PM
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