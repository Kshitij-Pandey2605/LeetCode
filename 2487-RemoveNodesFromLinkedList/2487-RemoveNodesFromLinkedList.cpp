// Last updated: 8/13/2026, 9:38:23 AM
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
13
14    ListNode* reverseList(ListNode* head) {
15        ListNode* prev = nullptr;
16        ListNode* curr = head;
17
18        while (curr != nullptr) {
19            ListNode* next = curr->next;
20
21            curr->next = prev;
22            prev = curr;
23            curr = next;
24        }
25
26        return prev;
27    }
28
29    ListNode* removeNodes(ListNode* head) {
30
31        // 1. Reverse the list
32        head = reverseList(head);
33
34        // 2. Remove smaller nodes
35        ListNode* curr = head;
36        int maximum = head->val;
37
38        while (curr != nullptr && curr->next != nullptr) {
39
40            if (curr->next->val < maximum) {
41                curr->next = curr->next->next;
42            }
43            else {
44                curr = curr->next;
45                maximum = curr->val;
46            }
47        }
48
49        // 3. Reverse again
50        head = reverseList(head);
51
52        return head;
53    }
54};