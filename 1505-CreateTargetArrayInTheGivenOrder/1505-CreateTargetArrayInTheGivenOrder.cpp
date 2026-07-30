// Last updated: 7/30/2026, 5:13:15 PM
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {

        vector<int> target;

        for(int i = 0; i < nums.size(); ++i){

            target.insert(target.begin() + index[i], nums[i]);

        }

        return target;
    }
};