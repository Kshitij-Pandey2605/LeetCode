// Last updated: 9/28/2026, 3:14:14 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> s(sentence.begin(), sentence.end());
        return s.size() == 26;
    }
};