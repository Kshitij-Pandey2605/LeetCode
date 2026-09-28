// Last updated: 9/28/2026, 3:15:57 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     unordered_map<int,int>freq;
     for(int value:arr){
        freq[value]++;
     }
    unordered_set<int>count;
    for(auto &it:freq){
        count.insert(it.second);
    }
    return freq.size()==count.size();

    }
};