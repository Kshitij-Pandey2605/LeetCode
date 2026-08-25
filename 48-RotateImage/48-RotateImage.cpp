// Last updated: 8/25/2026, 3:39:35 PM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5
6        // Step 1: Transpose the matrix
7        for (int i = 0; i < n; i++) {
8            for (int j = i + 1; j < n; j++) {
9                swap(matrix[i][j], matrix[j][i]);
10            }
11        }
12
13        // Step 2: Reverse every row
14        for (int i = 0; i < n; i++) {
15            reverse(matrix[i].begin(), matrix[i].end());
16        }
17    }
18};