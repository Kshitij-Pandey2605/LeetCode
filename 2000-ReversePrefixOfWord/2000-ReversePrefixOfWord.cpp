// Last updated: 9/28/2026, 3:13:41 PM
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