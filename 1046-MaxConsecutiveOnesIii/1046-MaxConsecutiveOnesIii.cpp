// Last updated: 7/31/2026, 9:19:05 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int h=0;
       int l=0;
       int count=0;
       int size=INT_MIN;

       
       while(h<nums.size()){

        if(nums[h]==0){
            count++;
        }

        while(count>k){
            if(nums[l]==0){
                count--;
            }
            l++;
        }


         size=max(size,(h-l+1));
          h++; 

       }
       return size;

    }
};