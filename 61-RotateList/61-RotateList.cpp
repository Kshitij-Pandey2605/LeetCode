// Last updated: 8/11/2026, 11:54:54 AM
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
13    ListNode* rotateRight(ListNode* head, int k) {
14    if(head == nullptr || head->next == nullptr || k == 0)
15   { return head;}
16
17
18        int length = 1;
19        ListNode*tail=head;
20        while(tail->next!=nullptr){
21            tail=tail->next;
22            length++;
23        }
24
25      k=k%length;
26       
27       if(k==0){return head;}
28
29        tail->next=head;
30
31        ListNode*newTail=head;
32
33        for(int i=1;i<length-k;++i){
34              
35          newTail=newTail->next;
36        }
37
38        ListNode*newHead=newTail->next;
39
40        newTail->next=nullptr;
41        return newHead;
42    }
43};