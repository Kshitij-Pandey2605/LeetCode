// Last updated: 7/30/2026, 5:13:45 PM
class Solution {
public:
    int maximum69Number (int num) {
        string h=to_string(num);
      for(int i=0;i<h.length();++i){
          if(h[i]=='6'){
            h[i]='9';
            break;
          }
      }
      return stoi(h);
    }
};