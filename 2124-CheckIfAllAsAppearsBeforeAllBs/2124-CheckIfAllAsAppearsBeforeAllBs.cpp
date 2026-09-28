// Last updated: 9/28/2026, 3:13:16 PM
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