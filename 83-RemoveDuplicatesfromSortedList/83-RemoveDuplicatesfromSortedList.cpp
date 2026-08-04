// Last updated: 8/4/2026, 1:15:28 PM
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
14        ListNode*curr=head;
15        while(curr!=NULL&&curr->next!=NULL){
16            if(curr->val==curr->next->val){
17                curr->next=curr->next->next;
18            }
19            else{
20                curr=curr->next;
21            }
22        }
23        return head;
24    }
25};