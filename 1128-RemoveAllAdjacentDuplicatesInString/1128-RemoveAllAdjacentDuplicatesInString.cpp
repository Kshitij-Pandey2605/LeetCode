// Last updated: 7/31/2026, 9:18:59 PM
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