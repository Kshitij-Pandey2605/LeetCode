// Last updated: 7/29/2026, 4:08:00 PM
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int>st;
        int count =0;

        for(int x:nums){
            st.insert(x);
        }
        for(int x:st){
            if(st.count(x+diff )&& st.count(x+2*diff)){
                count++;
            }
        }
        return  count;
    }
};