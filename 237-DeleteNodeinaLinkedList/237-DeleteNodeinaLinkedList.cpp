// Last updated: 8/4/2026, 2:01:44 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9
10
11 
12class Solution {
13public:
14    void deleteNode(ListNode* node) {
15     ListNode*curr=node;
16
17     curr->val=curr->next->val;
18      ListNode*temp=curr->next;
19     curr->next=curr->next->next;
20      delete temp;
21     return;
22
23
24
25    }
26};