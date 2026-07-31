// Last updated: 7/31/2026, 9:19:47 PM
class Solution {
public:
    bool detectCapitalUse(string word) {
        string result;
        for(int i=0;i<word.length();++i){
            if(isupper(word[i])){
                result+=word[i];
            }
        }
        if(result.length()==word.length()){
            return true;
        }
        else if(result.length()==0){
            return true;
        }
        else if(result.length()==1&&result[0]==word[0]){
            return true;
        }
        return false;
    }
};