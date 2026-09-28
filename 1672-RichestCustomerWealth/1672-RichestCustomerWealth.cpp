// Last updated: 9/28/2026, 3:14:59 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int maxi = 0;

        // har customer
        for(int i = 0; i < accounts.size(); ++i){

            int sum = 0;

            // us customer ke saare accounts
            for(int j = 0; j < accounts[i].size(); ++j){

                sum += accounts[i][j];
            }

            // maximum wealth update
            maxi = max(maxi, sum);
        }

        return maxi;
    }
};