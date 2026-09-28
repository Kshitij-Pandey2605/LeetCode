// Last updated: 9/28/2026, 3:18:04 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans ;

        int left=0;
        int right = numbers.size()-1;

       while(right>left){

        int sum = numbers[left]+numbers[right];
              
              if(sum==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                 break;
              }
              else if( sum<target){
                left++;
                
              }
              else{right--;}
       }
       return ans;
    }
};