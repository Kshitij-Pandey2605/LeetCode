// Last updated: 7/31/2026, 9:20:51 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>mp;

        for(char ch:s){
            mp[ch]++;
        }
        for(char cb:t){
            mp[cb]--;
        }
        for(auto it:mp){
            if(it.second!=0){
              return false;
            }
        }
        return true ;

    }
};