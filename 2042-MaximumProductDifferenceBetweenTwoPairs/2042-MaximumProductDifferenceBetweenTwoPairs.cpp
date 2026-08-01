// Last updated: 8/2/2026, 3:26:37 AM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n =nums.size();
       int ans =(nums[n-1]*nums[n-2])-(nums[0]*nums[1]);

       return ans;
    }
};