// Last updated: 7/31/2026, 9:18:50 PM
class Solution {
public:
    string makeFancyString(string s) {
        string result;
      for(int i=0;i<s.length();++i){

    if(result.length() >= 2 &&
       result[result.length()-1] == s[i] &&
       result[result.length()-2] == s[i]){

        continue;
    }

    result += s[i];
}
return result;
    }
};