// Last updated: 9/7/2026, 11:11:03 AM
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
13    ListNode* deleteMiddle(ListNode* head) {
14
15            if(head == NULL || head->next == NULL) {
16            return NULL;
17        }
18        
19        ListNode*slow=head;
20        ListNode*fast=head;
21        ListNode*pre=NULL;
22        while(fast!=NULL&&fast->next!=NULL){
23            pre=slow;
24            slow=slow->next;
25            fast=fast->next->next;
26           
27        }
28         pre->next=pre->next->next;
29        return head;
30
31    }
32};