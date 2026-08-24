// Last updated: 8/24/2026, 2:17:45 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12
13        ListNode* slow = head;
14        ListNode* fast = head;
15
16        while (fast != NULL && fast->next != NULL) {
17
18            slow = slow->next;
19            fast = fast->next->next;
20
21            if (slow == fast) {
22
23                slow = head;
24
25                while (slow != fast) {
26                    slow = slow->next;
27                    fast = fast->next;
28                }
29
30                return slow;
31            }
32        }
33
34        return NULL;
35    }
36};