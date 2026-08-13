// Last updated: 8/13/2026, 1:37:43 PM
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
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int>result;
15
16        ListNode*temp=head->next;
17
18        while(head!=nullptr){
19            ListNode*temp=head->next;
20            bool found = false;
21         
22         while(temp!=nullptr){
23            if(temp->val>head->val){
24                result.push_back(temp->val);
25               found = true;
26               break;
27            }
28            temp=temp->next;
29        }
30           if(!found){result.push_back(0);}
31
32           head=head->next;
33        }
34        return result;
35    }
36};