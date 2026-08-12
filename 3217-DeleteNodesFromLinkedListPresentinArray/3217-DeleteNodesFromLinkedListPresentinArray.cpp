// Last updated: 8/12/2026, 9:50:48 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14
15        ListNode* curr = head;
16        ListNode* prev = nullptr;
17        unordered_set<int>st(nums.begin(), nums.end());
18
19        while (curr != nullptr) {
20
21
22            // Check whether curr->val exists in nums
23            if(st.count(curr->val)){
24
25            
26
27                // If deleting head
28                if (prev == nullptr) {
29                    head = curr->next;
30                    
31                    curr = head;
32                }
33
34                // If deleting middle/end node
35                else {
36                    prev->next = curr->next;
37                    curr = prev->next;
38                }
39
40            } else {
41                prev = curr;
42                curr = curr->next;
43            }
44        }
45
46        return head;
47    
48    }
49};