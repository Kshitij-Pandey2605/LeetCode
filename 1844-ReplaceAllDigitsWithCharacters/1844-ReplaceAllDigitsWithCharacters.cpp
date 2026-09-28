// Last updated: 9/28/2026, 3:14:17 PM
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