// Last updated: 9/28/2026, 3:14:43 PM
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {

        vector<int> arr;

        arr.push_back(first);

        for(int i = 0; i < encoded.size(); ++i){

            int next = encoded[i] ^ arr[i];

            arr.push_back(next);
        }

        return arr;
    }
};