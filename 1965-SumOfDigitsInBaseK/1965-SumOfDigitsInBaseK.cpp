// Last updated: 7/29/2026, 4:08:29 PM
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