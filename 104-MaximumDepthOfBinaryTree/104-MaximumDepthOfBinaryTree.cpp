// Last updated: 7/31/2026, 9:24:08 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
          // Base case
        if(root == NULL){
            return 0;
        }

        // Left subtree depth
        int left = maxDepth(root->left);

        // Right subtree depth
        int right = maxDepth(root->right);

        // Current node answer
        return max(left, right) + 1;
    }
};