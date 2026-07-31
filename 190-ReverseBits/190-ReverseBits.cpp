// Last updated: 7/31/2026, 9:23:33 PM
class Solution {
public:
    int reverseBits(int n) {
       int ans = 0;

for(int i = 0; i < 32; ++i){

    ans = (ans << 1) | (n & 1);

    n = n >> 1;
}

return ans;
    }
};