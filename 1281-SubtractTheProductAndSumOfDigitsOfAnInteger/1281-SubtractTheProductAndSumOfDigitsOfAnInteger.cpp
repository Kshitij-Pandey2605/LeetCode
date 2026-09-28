// Last updated: 9/28/2026, 3:15:52 PM
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum =0;
       while(n!=0){
       int h= n%10;
        product=product*h;
        sum=sum+h;
        n=n/10;
       }
       return product-sum;
    }
};