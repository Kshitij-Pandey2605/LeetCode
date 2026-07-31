// Last updated: 7/31/2026, 9:18:44 PM
class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        int final = 0;
        for(int i=0;i<s.length();++i){
            if(s[i]=='R'){
                ++count;
            }
            else{
                --count;
            }
            if(count==0){
                ++final;
            }
        }
        return final;
    }
};