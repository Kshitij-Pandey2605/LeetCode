// Last updated: 9/28/2026, 3:16:09 PM
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