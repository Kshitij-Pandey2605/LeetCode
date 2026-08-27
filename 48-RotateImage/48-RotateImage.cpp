// Last updated: 8/27/2026, 10:56:21 PM
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        stack<int>st1;
15        stack<int>st2;
16
17           while (l1 != NULL) {
18            st1.push(l1->val);
19            l1 = l1->next;
20        }
21
22
23           while (l2 != NULL) {
24            st2.push(l2->val);
25            l2 = l2->next;
26        }
27
28          int carry = 0;
29        ListNode* head = NULL;
30
31
32         while (!st1.empty() || !st2.empty() || carry != 0) {
33
34            int sum = carry;
35
36            if (!st1.empty()) {
37                sum += st1.top();
38                st1.pop();
39            }
40
41            if (!st2.empty()) {
42                sum += st2.top();
43                st2.pop();
44            }
45
46            int digit = sum % 10;
47            carry = sum / 10;
48
49            // Insert new node at front
50            ListNode* newNode = new ListNode(digit);
51            newNode->next = head;
52            head = newNode;
53        }
54
55        return head;
56    }
57};