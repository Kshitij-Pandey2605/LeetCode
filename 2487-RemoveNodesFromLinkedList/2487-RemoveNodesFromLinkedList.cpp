// Last updated: 8/12/2026, 2:24:59 PM
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
13    ListNode* removeNodes(ListNode* head) {
14
15        vector<ListNode*> st;
16
17        ListNode* curr = head;
18
19        while (curr != nullptr) {
20
21            while (!st.empty() && st.back()->val < curr->val) {
22                st.pop_back();
23            }
24
25            st.push_back(curr);
26            curr = curr->next;
27        }
28
29        for (int i = 0; i < st.size() - 1; i++) {
30            st[i]->next = st[i + 1];
31        }
32
33        st.back()->next = nullptr;
34
35        return st[0];
36    }
37};