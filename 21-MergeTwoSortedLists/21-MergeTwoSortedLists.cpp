// Last updated: 9/12/2026, 5:06:07 PM
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4
5        ListNode* temp1 = list1;
6        ListNode* temp2 = list2;
7
8        ListNode* dummy = new ListNode(0);
9        ListNode* temp = dummy;
10
11        while (temp1 != NULL && temp2 != NULL) {
12
13            if (temp1->val <= temp2->val) {
14                temp->next = temp1;
15                temp1 = temp1->next;
16            }
17            else {
18                temp->next = temp2;
19                temp2 = temp2->next;
20            }
21
22            temp = temp->next;
23        }
24
25        // One list is empty, attach the remaining list
26        if (temp1 != NULL) {
27            temp->next = temp1;
28        }
29        else {
30            temp->next = temp2;
31        }
32
33        return dummy->next;
34    }
35};