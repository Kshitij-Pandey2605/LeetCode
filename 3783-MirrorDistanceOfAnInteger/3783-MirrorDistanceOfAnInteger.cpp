// Last updated: 9/28/2026, 3:11:58 PM
class Solution {
public:
    int mirrorDistance(int n) {
int rev =0;
int original =n;
    while(n!=0){
        int x = n%10;
        rev = rev*10+x;
        n=n/10;
    }
        return abs(original-rev);
    }
};