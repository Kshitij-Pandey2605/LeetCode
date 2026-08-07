// Last updated: 8/7/2026, 10:26:05 PM
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14
15        if (head == nullptr || left == right)
16            return head;
17
18        ListNode dummy(0);
19        dummy.next = head;
20
21        ListNode* prev = &dummy;
22
23        // Move prev to the node before 'left'
24        for (int i = 1; i < left; i++) {
25            prev = prev->next;
26        }
27
28        ListNode* curr = prev->next;
29
30        // Reverse the sublist
31        for (int i = 0; i < right - left; i++) {
32            ListNode* next = curr->next;
33
34            curr->next = next->next;
35            next->next = prev->next;
36            prev->next = next;
37        }
38
39        return dummy.next;
40    }
41};