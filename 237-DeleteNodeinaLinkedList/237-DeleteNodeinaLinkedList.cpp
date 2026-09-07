// Last updated: 9/7/2026, 2:09:13 PM
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
13    ListNode* removeElements(ListNode* head, int val) {
14        ListNode* dummy = new ListNode(0);
15        dummy->next = head;
16        ListNode* pre = dummy;
17         ListNode* slow = head;
18      
19
20        while(slow!=NULL){
21            
22            if(slow->val==val){
23                pre->next=slow->next;
24                slow=pre->next;
25            }
26            else{
27                pre=slow;
28                slow=slow->next;
29            }
30            
31        }
32        return dummy->next;
33    }
34};