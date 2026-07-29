// Last updated: 7/29/2026, 4:08:14 PM
class Solution {
public:
    string capitalizeTitle(string title) {
        string result;
           string temp;
        for(int i=0;i<title.length();++i){
         
            if(title[i]!=' '){
                temp+=tolower(title[i]);
            }
            else{
             if(temp.length() > 2){
    temp[0] = toupper(temp[0]);
}
                result+=temp;
               result+=' ';
                temp="";
            }
            
        }
        if(temp.length()>2){
            temp[0]=toupper(temp[0]);
        }
        result+=temp;
        return result;

    }
};