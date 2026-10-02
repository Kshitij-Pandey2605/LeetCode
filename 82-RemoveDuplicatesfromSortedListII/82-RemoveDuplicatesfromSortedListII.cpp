// Last updated: 10/2/2026, 8:01:08 AM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        ListNode* dummy = new ListNode(0);
16        dummy->next = head;
17
18        ListNode* prev = dummy;
19        ListNode* temp = head;
20
21        while (temp != NULL) {
22
23            if (temp->next != NULL && temp->val == temp->next->val) {
24
25                while (temp->next != NULL && temp->val == temp->next->val) {
26                    temp = temp->next;
27                }
28
29                prev->next = temp->next;
30            }
31            else {
32                prev = temp;
33            }
34
35            temp = temp->next;
36        }
37
38        return dummy->next;
39    }
40};