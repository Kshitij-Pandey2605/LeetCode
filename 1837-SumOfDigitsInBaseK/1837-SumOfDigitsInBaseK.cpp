// Last updated: 9/28/2026, 3:14:10 PM
class Solution {
public:
    int sumBase(int n, int k) {
        int sum =0;
        while(n>0){
            sum+=n%k;
            n=n/k;
        }
        return sum;
    }
};