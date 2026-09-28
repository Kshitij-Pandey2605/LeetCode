// Last updated: 9/28/2026, 3:16:10 PM
class Solution {
public:
    string removeDuplicates(string s) {
    string result;

    for(int i=0;i<s.length();++i){
        if(!result.empty()&&s[i]==result.back()){
            result.pop_back();
            continue;
        }
        result+=s[i];
    }
    return result;
    }
};