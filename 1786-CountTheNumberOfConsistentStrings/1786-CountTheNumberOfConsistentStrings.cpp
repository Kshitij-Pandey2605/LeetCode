// Last updated: 7/30/2026, 5:11:50 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        int count=0;

        for (int i=0;i<words.size();++i){
            
        bool ok=true;
            string temp = words[i];
            for(int j=0;j<temp.length();j++){
                 if(allowed.find(temp[j])==string::npos){
                  
                     ok=false;
                    break;
                 }
                 
            }
            if(ok==true){
                count++;
            }
            
        }
        return count;
    }
};