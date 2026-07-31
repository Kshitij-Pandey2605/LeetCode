// Last updated: 7/31/2026, 9:19:58 PM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        unordered_map<char,int> pMap;
                unordered_map<char,int> resMap;
   int k=p.size();

        if(p.size()>s.size()){
            return result;
        }

        for(char c : p){
            pMap[c]++;
        }
        for(int i=0;i<k;++i){
            resMap[s[i]]++;
        }
        if(pMap==resMap){
            result.push_back(0);
        }
        for(int i=k;i<s.size();++i){
            resMap[s[i-k]]--;
            if(resMap[s[i-k]]==0){
                resMap.erase(s[i-k]);
            }
            resMap[s[i]]++;
            if(pMap==resMap){
            result.push_back(i-k+1);
        }
        }
       
        return result;
    }
};