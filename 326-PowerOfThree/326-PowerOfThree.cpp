// Last updated: 7/31/2026, 9:20:29 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
       if(n<=0){
        return false;
       }

       while(n%3==0){
        n=n/3;
       } 
       return n==1;
    }

};