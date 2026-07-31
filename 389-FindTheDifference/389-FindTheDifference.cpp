// Last updated: 7/31/2026, 9:20:09 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;

        for(char si:s){
            mp[si]++;
        }
        for(char ti:t){
            if(!mp[ti]){
                return ti;
            }
            else{
                mp[ti]--;
            }
        }
        return {};
    }
    

};