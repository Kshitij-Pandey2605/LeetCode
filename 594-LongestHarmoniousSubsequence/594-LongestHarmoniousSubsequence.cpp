// Last updated: 7/31/2026, 9:19:41 PM
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>ch;
         
         for(int i=0;i<nums.size();++i){
            ch[nums[i]]++;
         }
         int ans =0;
         for(auto a:ch){
            if(ch.find(a.first+1)!=ch.end()){
              ans = max(ans, a.second + ch[a.first + 1]);
            }
         }
       
      
         return ans;

    }
};