// Last updated: 7/31/2026, 9:19:10 PM
class Solution {
public:
 bool isAlphabet(char c) {
    c = tolower(c);
    return c >= 'a' && c <= 'z';
}
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.size()-1;
        while (left< right){
            if(!isAlphabet(s[left])){
                ++left;
            }
            else if (!isAlphabet(s[right])){
                --right;
            }
            else{
                swap(s[left],s[right]);
                ++left;
                --right;
            }
        }
        return s;
    }
};