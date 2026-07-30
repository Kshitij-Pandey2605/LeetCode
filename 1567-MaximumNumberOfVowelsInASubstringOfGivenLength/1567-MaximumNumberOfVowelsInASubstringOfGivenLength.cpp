// Last updated: 7/30/2026, 5:12:56 PM
class Solution {
public:

    bool isVowel(char ch){

        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }

    int maxVowels(string s, int k) {

        int count = 0;

        // first window
        for(int i = 0; i < k; ++i){

            if(isVowel(s[i])){
                count++;
            }
        }

        int maxi = count;

        // sliding window
        for(int i = k; i < s.length(); ++i){

            // remove left char
            if(isVowel(s[i-k])){
                count--;
            }

            // add new right char
            if(isVowel(s[i])){
                count++;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};