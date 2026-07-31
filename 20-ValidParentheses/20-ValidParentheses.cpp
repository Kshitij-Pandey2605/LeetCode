// Last updated: 7/31/2026, 9:25:11 PM
class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(int i = 0; i < s.length(); ++i){

            char ch = s[i];

            // opening brackets
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }

            // closing brackets
            else{

                // stack empty means invalid
                if(st.empty()){
                    return false;
                }

                // matching check
                if( (ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[') ){

                    st.pop();
                }
                else{
                    return false;
                }
            }
        }

        // end me stack empty hona chahiye
        return st.empty();
    }
};