// Last updated: 7/31/2026, 9:18:00 PM
class Solution {
public:

    bool isvowel(char c){
       c= tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;

    };
    bool halvesAreAlike(string s) {
       int n = s.length();
       int count=0;

       for(int i=0;i<n/2;++i){
          if(isvowel(s[i])){
            count++;
          }
          if(isvowel(s[i+n/2])){
            count--;
          }
       }
      return count==0;
    }
};