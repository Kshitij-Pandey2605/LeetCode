// Last updated: 7/31/2026, 9:24:23 PM
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        stringstream ss(path);
        string token;

        while (getline(ss, token, '/')) {

            if (token == "" || token == ".") {
                continue;
            }

            if (token == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } 
            else {
                st.push_back(token);
            }
        }

        string result = "";

        for (string dir : st) {
            result += "/" + dir;
        }

        return result.empty() ? "/" : result;
    }
};