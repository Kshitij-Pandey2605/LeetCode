// Last updated: 7/31/2026, 9:18:58 PM
class Solution {
public:
    string defangIPaddr(string address) {
        string result ;
       for (int i =0;i<address.length();++i){
        if(address[i]=='.'){
            result+="[.]";    
       }
       else {
        result+=address[i];
       }
   
    }
        return result;
    }
};