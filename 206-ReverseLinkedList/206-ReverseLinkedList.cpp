// Last updated: 8/3/2026, 1:11:20 PM
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
13    ListNode* reverseList(ListNode* head) {
14        ListNode*temp=head;
15        ListNode*prev=nullptr;
16        ListNode*next;
17        // if(temp!=nullptr){
18        // next=temp->next;
19        // }
20      
21      
22        while(temp!=nullptr){
23            next=temp->next;
24            temp->next =prev;
25            prev=temp;
26             
27            temp=next;
28           
29        }
30      
31        return prev;
32    }
33};