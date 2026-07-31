// Last updated: 7/31/2026, 9:24:56 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        
   int n=haystack.length();
   int m=needle.length();

   for(int i=0;i<=n-m;++i){
       bool match=true;
    for(int j=0;j<m;++j){
        if(haystack[i+j]==needle[j]){
           continue;
        }
        else{
            match=false;
            break;
        }
    }
    if(match){
        return i;
    }
   }
  
   return -1;
    }
    
    };