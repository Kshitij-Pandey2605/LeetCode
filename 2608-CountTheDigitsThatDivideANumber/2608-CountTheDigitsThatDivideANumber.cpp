// Last updated: 7/29/2026, 4:07:41 PM
class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int orig = num;
       
       while(num!=0){
        int a = num%10;
        if(orig%a==0){
            count++;
        }
        num=num/10;
       }
        return count;
    }
};