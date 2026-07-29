// Last updated: 7/29/2026, 4:08:01 PM
class Solution {
public:
    char repeatedCharacter(string s) {
        int freq[26];
        for(char ch:s){
            freq[ch-'a']++;

            if(freq[ch-'a']==2){
                return ch;
            }
        }
        return {};
    }
};