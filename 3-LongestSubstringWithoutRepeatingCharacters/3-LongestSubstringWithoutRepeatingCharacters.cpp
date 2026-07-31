// Last updated: 7/31/2026, 9:25:39 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> st;

        int left = 0;
        int maxi = 0;

        for(int right = 0; right < s.length(); ++right){

            // duplicate mila
            while(st.count(s[right])){

                st.erase(s[left]);

                left++;
            }

            st.insert(s[right]);

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};