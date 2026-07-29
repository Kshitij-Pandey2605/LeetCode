// Last updated: 7/29/2026, 4:08:31 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> s(sentence.begin(), sentence.end());
        return s.size() == 26;
    }
};