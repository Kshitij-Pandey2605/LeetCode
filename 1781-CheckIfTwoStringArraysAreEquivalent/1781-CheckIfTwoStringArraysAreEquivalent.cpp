// Last updated: 7/30/2026, 5:11:57 PM
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string one, two;

        for (int i = 0; i < word1.size(); i++) {
            one += word1[i];
        }

        for (int i = 0; i < word2.size(); i++) {
            two += word2[i];
        }

        return one == two;
    }
};