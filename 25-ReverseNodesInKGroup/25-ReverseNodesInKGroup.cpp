// Last updated: 7/31/2026, 9:25:06 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(next) {}
 * };
 */

class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {

        // check if k nodes exist
        ListNode* temp = head;

        for(int i = 0; i < k; ++i){

            if(temp == NULL){
                return head;
            }

            temp = temp->next;
        }

        // reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        int count = 0;

        while(curr != NULL && count < k){

            next = curr->next;

            curr->next = prev;

            prev = curr;

            curr = next;

            count++;
        }

        // connect remaining list
        head->next = reverseKGroup(curr, k);

        // new head after reverse
        return prev;
    }
};