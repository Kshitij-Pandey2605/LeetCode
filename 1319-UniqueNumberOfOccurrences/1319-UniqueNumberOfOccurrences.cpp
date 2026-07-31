// Last updated: 7/31/2026, 9:18:47 PM
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