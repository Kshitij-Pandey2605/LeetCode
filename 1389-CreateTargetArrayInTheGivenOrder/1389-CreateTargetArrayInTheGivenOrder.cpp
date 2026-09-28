// Last updated: 9/28/2026, 3:15:35 PM
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