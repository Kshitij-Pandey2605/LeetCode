// Last updated: 9/28/2026, 3:16:51 PM
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