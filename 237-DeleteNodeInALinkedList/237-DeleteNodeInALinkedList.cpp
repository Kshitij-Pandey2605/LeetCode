// Last updated: 9/28/2026, 3:17:29 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


 
class Solution {
public:
    void deleteNode(ListNode* node) {
     ListNode*curr=node;

     curr->val=curr->next->val;
      ListNode*temp=curr->next;
     curr->next=curr->next->next;
      delete temp;
     return;



    }
};