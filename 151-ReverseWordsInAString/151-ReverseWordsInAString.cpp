// Last updated: 7/31/2026, 9:23:47 PM
class Solution {
public:
    string reverseWords(string s) {
     vector<string>store;
     string word = "";
     for(int i=0;i<s.length();++i){
        if(s[i]!=' '){
            
            word=word+s[i];
        
        }
        else{
               if (!word.empty()) {   // ✅ fix
                    store.push_back(word);
                    word = "";
                }
        }
     }
     if(!word.empty()){
        store.push_back(word);           //for last element because there is no space 
        word="";
     }
     reverse(store.begin(),store.end());      // we can also use push_front to avoid this reverse step
     for(int i=0;i<store.size();++i){
        word+=store[i];
        if(i!=store.size()-1){                 // printing last word without space 
            word+=" ";
        }
     }
     return word;
    }
};