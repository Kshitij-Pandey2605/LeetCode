// Last updated: 9/28/2026, 3:15:02 PM
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