// Last updated: 9/28/2026, 3:15:31 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int maxi = 0;

        // maximum find
        for(int i = 0; i < candies.size(); ++i){
            maxi = max(maxi, candies[i]);
        }

        vector<bool> ans;

        // check each child
        for(int i = 0; i < candies.size(); ++i){

            if(candies[i] + extraCandies >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
    }
};