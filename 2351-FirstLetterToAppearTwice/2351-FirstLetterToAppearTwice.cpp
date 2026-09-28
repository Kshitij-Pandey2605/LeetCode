// Last updated: 9/28/2026, 3:12:54 PM
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