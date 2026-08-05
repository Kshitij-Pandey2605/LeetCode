// Last updated: 8/5/2026, 1:53:46 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12       ListNode*temp1=headA;
13       ListNode*temp2=headB;
14
15       int lenA=0;
16       int lenB=0;
17
18       while(temp1!=nullptr){
19             lenA++;
20             temp1=temp1->next;
21       }
22       while(temp2!=nullptr){
23             lenB++;
24             temp2=temp2->next;
25       }
26       temp1=headA;
27       temp2=headB;
28
29       if(lenA>lenB){
30        for(int i=0;i<abs(lenA-lenB);++i){
31            temp1=temp1->next;
32        }
33       }
34       else{
35        for(int i=0;i<abs(lenB-lenA);++i){
36            temp2=temp2->next;
37        }
38       }
39
40       while(temp1!=temp2){
41        temp1=temp1->next;
42        temp2=temp2->next;
43       }
44
45       return temp1;
46
47    }
48};