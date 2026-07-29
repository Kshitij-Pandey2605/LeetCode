// Last updated: 7/29/2026, 4:07:38 PM
class Solution {
public:
    int minMaxDifference(int num) {

        string s = to_string(num);

        char targetMax;
        char targetMin = s[0];

        string maxi = "";
        string mini = "";

        // find first non-9 digit for maximum
        for(int i = 0; i < s.length(); ++i){

            if(s[i] != '9'){
                targetMax = s[i];
                break;
            }
        }

        // build maximum string
        for(int i = 0; i < s.length(); ++i){

            if(s[i] == targetMax){
                maxi += '9';
            }
            else{
                maxi += s[i];
            }
        }

        // build minimum string
        for(int i = 0; i < s.length(); ++i){

            if(s[i] == targetMin){
                mini += '0';
            }
            else{
                mini += s[i];
            }
        }

        return stoi(maxi) - stoi(mini);
    }
};