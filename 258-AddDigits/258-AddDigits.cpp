// Last updated: 7/31/2026, 9:20:47 PM
class Solution {
public:
    int addDigits(int num) {
    
        while(num>=10){
          int sum=0;
          while(num>0){
            sum+=num%10;
            num=num/10;
          }
          num=sum;
        }
        return num;
       
    }
};