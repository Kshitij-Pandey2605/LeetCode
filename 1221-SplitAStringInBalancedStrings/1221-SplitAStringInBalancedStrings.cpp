// Last updated: 9/28/2026, 3:15:54 PM
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