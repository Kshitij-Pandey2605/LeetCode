// Last updated: 7/30/2026, 5:12:24 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        int final=0;
        for(int i=0;i<n;++i){
            nums[i]=start+2*i;
        }
        for(int i=0;i<n;++i){
            final=final^nums[i];
        }
        return final;
    }
};