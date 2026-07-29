// Last updated: 7/29/2026, 4:08:26 PM
class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();++i){
            if(i<s.length()-2){
            
            if(s[i]!=s[i+1]&&s[i]!=s[i+2]&&s[i+1]!=s[i+2]){
                count++;
            }
            }
        }
        return count;
    }
};