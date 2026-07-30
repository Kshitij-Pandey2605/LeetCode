// Last updated: 7/30/2026, 5:12:43 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans;

        int i = 0;
        int j = n;

        while(i < n){

            ans.push_back(nums[i]);

            ans.push_back(nums[j]);

            i++;
            j++;
        }

        return ans;
    }
};