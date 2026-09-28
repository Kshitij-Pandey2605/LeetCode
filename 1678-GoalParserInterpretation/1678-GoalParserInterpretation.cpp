// Last updated: 9/28/2026, 3:14:58 PM
class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i=0;i<command.length();++i){
            if(command[i]=='G'){
                result+='G';
            }
            if(command[i]=='('&&command[i+1]==')'){
                result+='o';

            }
            else if(command[i]=='('&&command[i+1]=='a'&&command[i+2]=='l'&&command[i+3]==')'){
                      result+="al";
            }
        }
        return result;
    }
};