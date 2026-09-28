// Last updated: 9/28/2026, 3:12:00 PM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
    for(int i =0;i<nums.size();i++){
        sum+=nums[i];
    }
   return sum%k;


   
   return {};

    }
};