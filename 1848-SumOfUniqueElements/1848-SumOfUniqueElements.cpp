// Last updated: 7/31/2026, 9:17:54 PM
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for (auto it : mp) {

            if (it.second == 1) {
                sum += it.first;
            }
        }
        return sum;
    }
};\