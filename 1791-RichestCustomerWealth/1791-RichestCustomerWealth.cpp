// Last updated: 7/30/2026, 5:11:34 PM
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