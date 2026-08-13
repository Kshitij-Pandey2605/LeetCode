// Last updated: 8/13/2026, 4:16:20 PM
1class Solution {
2public:
3    int subarraysDivByK(vector<int>& nums, int k) {
4        vector<int> remainder_count(k, 0);
5        
6        remainder_count[0] = 1;
7        
8        int prefix_sum = 0;
9        int result = 0;
10        
11        for (int num : nums) {
12            prefix_sum += num;
13            int remainder = ((prefix_sum % k) + k) % k;
14            result += remainder_count[remainder];           
15            remainder_count[remainder]++;
16        }
17        
18        return result;
19    }
20};