// Last updated: 7/29/2026, 4:08:17 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int x = 0;

        for(int i = 0; i < operations.size(); ++i){

            if(operations[i][1] == '+'){
                x++;
            }
            else{
                x--;
            }
        }

        return x;
    }
};