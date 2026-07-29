// Last updated: 7/29/2026, 4:08:11 PM
class Solution {
public:
    bool checkString(string s) {
        bool seenB=false;
        for(int i=0;i<s.length();++i){
            if(s[i]=='b'){
                seenB=true;
            }
            else if(s[i]=='a'){
                if(seenB){
                    return false;
                }
               

            }
        }
        return true;
    }
};