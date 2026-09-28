// Last updated: 9/28/2026, 3:16:22 PM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> remainder_count(k, 0);
        
        remainder_count[0] = 1;
        
        int prefix_sum = 0;
        int result = 0;
        
        for (int num : nums) {
            prefix_sum += num;
            int remainder = ((prefix_sum % k) + k) % k;
            result += remainder_count[remainder];           
            remainder_count[remainder]++;
        }
        
        return result;
    }
};