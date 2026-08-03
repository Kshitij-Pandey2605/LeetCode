// Last updated: 8/3/2026, 2:29:57 PM
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        int count = 0;
15        ListNode* temp = head;
16
17        while (temp!=nullptr) {
18            count++;
19            temp = temp->next;
20        }
21
22        if (count == n)
23            return head->next;
24
25        temp = head;
26        for (int i = 1; i < count - n; i++)
27            temp = temp->next;
28
29        temp->next = temp->next->next;
30
31        return head;
32    }
33};