// Last updated: 9/28/2026, 3:17:38 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pre = dummy;
         ListNode* slow = head;
      

        while(slow!=NULL){
            
            if(slow->val==val){
                pre->next=slow->next;
                slow=pre->next;
            }
            else{
                pre=slow;
                slow=slow->next;
            }
            
        }
        return dummy->next;
    }
};