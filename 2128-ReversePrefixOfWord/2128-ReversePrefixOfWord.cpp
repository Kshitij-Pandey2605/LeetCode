// Last updated: 7/29/2026, 4:08:18 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.length();++i){
            if(word[i]==ch){
                reverse(word.begin(),word.begin()+i+1);
                
                break;
            }
           
        }

        return word;
    }
};