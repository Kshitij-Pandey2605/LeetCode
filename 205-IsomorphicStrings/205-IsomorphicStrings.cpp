// Last updated: 7/31/2026, 9:21:06 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>s1;
        unordered_map<char,char>t1;

        for(int i=0;i<s.length();++i){
            char c1=s[i];
            char c2=t[i];
            if(s1.count(c1)&&s1[c1]!=c2)return false;
            if(t1.count(c2)&&t1[c2]!=c1)return false;
            s1[c1]=c2;
            t1[c2]=c1;
        }
        return true;
    }
};