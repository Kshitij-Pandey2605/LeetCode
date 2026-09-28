// Last updated: 9/28/2026, 3:12:07 PM
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {

      unordered_map<int,int>freq;

      int left=0;
      int right =k-1;

      while(right<nums.size()){
        set<int>kb;
        for(int i=left;i<=right;++i){
                 kb.insert(nums[i]);
                 
        }
        for(int x:kb){
            freq[x]++;
        }
        left++;
        right++;
      }

      int ans=-1;

      for(auto it:freq){
        if(it.second==1){
        ans=max(ans,it.first);
      }
      }


     return ans;
        
    }
};