// Last updated: 9/28/2026, 3:17:16 PM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>common;
        vector<int>result;

        for(int x:nums1){
            common.insert(x);
        }
        for(int x:nums2){
            if(common.find(x)!=common.end()){
                result.push_back(x);
                common.erase(x);
            }
        }
        return result;
      

    }
};