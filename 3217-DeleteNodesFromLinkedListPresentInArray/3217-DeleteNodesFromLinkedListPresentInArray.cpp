// Last updated: 9/28/2026, 3:12:10 PM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = nullptr;
        unordered_set<int>st(nums.begin(), nums.end());

        while (curr != nullptr) {


            // Check whether curr->val exists in nums
            if(st.count(curr->val)){

            

                // If deleting head
                if (prev == nullptr) {
                    head = curr->next;
                    
                    curr = head;
                }

                // If deleting middle/end node
                else {
                    prev->next = curr->next;
                    curr = prev->next;
                }

            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    
    }
};