// Last updated: 7/29/2026, 4:08:22 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        vector<int> ans;

        for(int i = 0; i < nums.size(); ++i){
            ans.push_back(nums[i]);
        }

        for(int i = 0; i < nums.size(); ++i){
            ans.push_back(nums[i]);
        }

        return ans;
    }
};