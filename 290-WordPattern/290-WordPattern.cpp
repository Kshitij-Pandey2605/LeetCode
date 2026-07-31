// Last updated: 7/31/2026, 9:20:31 PM
class Solution {
public:
    bool wordPattern(string pattern, string s) {
       vector<string> words;

        stringstream ss(s);
        string word;

        // string ko words me todna
        while(ss >> word){
            words.push_back(word);
        }

        // length same honi chahiye
        if(pattern.length() != words.size()){
            return false;
        }

        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;

        for(int i = 0; i < pattern.length(); ++i){

            char ch = pattern[i];
            string w = words[i];

            // agar mapping already exist karti hai
            if(mp1.count(ch)){

                // old mapping aur current word different
                if(mp1[ch] != w){
                    return false;
                }
            }
            else{
                mp1[ch] = w;
            }

            // reverse mapping check
            if(mp2.count(w)){

                if(mp2[w] != ch){
                    return false;
                }
            }
            else{
                mp2[w] = ch;
            }
        }

        return true;
    }
};