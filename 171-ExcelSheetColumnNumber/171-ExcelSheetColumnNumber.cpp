// Last updated: 7/31/2026, 9:23:25 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        unordered_map<char,int>mp;
        for(int i=0;i<26;++i){
         mp['A'+i]=i+1;
        }
        for(char ch:columnTitle){
            result=result*26+mp[ch];
        }
        return result;
    }
};