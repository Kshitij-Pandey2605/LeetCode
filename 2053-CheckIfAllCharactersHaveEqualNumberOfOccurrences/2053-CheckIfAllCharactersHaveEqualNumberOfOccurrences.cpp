// Last updated: 7/29/2026, 4:08:24 PM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int freq = mp.begin()->second;

        for (auto it : mp) {

            if (it.second != freq) {
                return false;
            }
        }
        return true;
    }
};