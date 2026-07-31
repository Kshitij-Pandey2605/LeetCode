// Last updated: 7/31/2026, 9:19:20 PM
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
         // empty place found
        if(root == NULL){
            return new TreeNode(val);
        }

        // go left
        if(val < root->val){
            root->left = insertIntoBST(root->left, val);
        }

        // go right
        else{
            root->right = insertIntoBST(root->right, val);
        }

        return root;
    }
};