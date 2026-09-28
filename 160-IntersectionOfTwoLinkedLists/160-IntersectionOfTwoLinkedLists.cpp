// Last updated: 9/28/2026, 3:18:09 PM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       ListNode*temp1=headA;
       ListNode*temp2=headB;

       int lenA=0;
       int lenB=0;

       while(temp1!=nullptr){
             lenA++;
             temp1=temp1->next;
       }
       while(temp2!=nullptr){
             lenB++;
             temp2=temp2->next;
       }
       temp1=headA;
       temp2=headB;

       if(lenA>lenB){
        for(int i=0;i<abs(lenA-lenB);++i){
            temp1=temp1->next;
        }
       }
       else{
        for(int i=0;i<abs(lenB-lenA);++i){
            temp2=temp2->next;
        }
       }

       while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
       }

       return temp1;

    }
};