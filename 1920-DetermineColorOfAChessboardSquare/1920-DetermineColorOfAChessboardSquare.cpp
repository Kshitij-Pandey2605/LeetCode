// Last updated: 7/29/2026, 4:08:36 PM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
       unordered_map<char,int>mp={
        {'a',1},
        {'b',2},
         {'c',3},
          {'d',4}, {'e',5}, {'f',6}, {'g',7}, {'h',8}

       };

       int col = mp[coordinates[0]];
       int val=coordinates[1]-'0';
       return (col+val)%2!=0;
    }
};