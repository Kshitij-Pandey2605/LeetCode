// Last updated: 7/31/2026, 9:25:13 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string substr=strs[0];
       for(int i=1;i<strs.size();++i){
        while(strs[i].find(substr)!=0){
            substr.pop_back();
        }
       }
       return substr;
    }
};