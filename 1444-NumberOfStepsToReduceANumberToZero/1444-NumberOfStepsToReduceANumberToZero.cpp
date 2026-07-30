// Last updated: 7/30/2026, 5:13:57 PM
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