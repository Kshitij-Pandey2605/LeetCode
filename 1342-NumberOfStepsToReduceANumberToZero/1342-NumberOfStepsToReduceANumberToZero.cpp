// Last updated: 9/28/2026, 3:15:43 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int count =0;
        while(num!=0){
            if(num%2==0){
                num=num/2;
                count++;
            }
            else{
                num=num-1;
                count++;
              }
        }
        return count;
    }
};