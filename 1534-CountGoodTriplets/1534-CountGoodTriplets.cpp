// Last updated: 8/2/2026, 9:48:24 PM
1class Solution {
2public:
3    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
4        int count = 0;
5        int n = arr.size();
6
7        for (int i = 0; i < n - 2; i++) {
8            for (int j = i + 1; j < n - 1; j++) {
9                for (int k = j + 1; k < n; k++) {
10
11                    if (abs(arr[i] - arr[j]) <= a &&
12                        abs(arr[j] - arr[k]) <= b &&
13                        abs(arr[i] - arr[k]) <= c) {
14                        count++;
15                    }
16
17                }
18            }
19        }
20
21        return count;
22    }
23};