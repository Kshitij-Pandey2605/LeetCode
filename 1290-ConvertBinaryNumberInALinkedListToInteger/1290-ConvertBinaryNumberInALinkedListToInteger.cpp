// Last updated: 9/28/2026, 3:15:49 PM
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;

        while (head != NULL) {
            ans = ans * 2 + head->val;
            head = head->next;
        }

        return ans;
    }
};