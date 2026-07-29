// Last updated: 7/29/2026, 4:08:33 PM
class Solution {
public:
    string replaceDigits(string s) {
        string result;
        for(int i=0;i<s.length();++i){
            if(isalpha(s[i])){
                result+=s[i];
            }
            else{
                int num = s[i]-'0';
                char h=result.back()+num;
                result+=h;
            }
        }
        return result;
    }
};