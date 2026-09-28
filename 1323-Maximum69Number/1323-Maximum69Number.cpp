// Last updated: 9/28/2026, 3:15:40 PM
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