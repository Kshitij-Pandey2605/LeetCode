// Last updated: 7/31/2026, 9:19:33 PM
class Solution {
public:
    string toLowerCase(string s) {
        string c;
      for(char a:s){
        a=tolower(a);
        c+=a;
      }
      return c;
    }
};