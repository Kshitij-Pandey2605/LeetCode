// Last updated: 9/28/2026, 3:14:30 PM
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if (edges[0][0] == edges[1][0] ||
            edges[0][0] == edges[1][1]) {
            return edges[0][0];
        }

        return edges[0][1];
    }
};