// Last updated: 7/31/2026, 9:20:34 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>ch;

        for(int b:nums){
            ch[b]++;
        }
        for(auto it : ch){
            if(it.second>1){
                return it.first;
            }
        }
        return {};
    }
};