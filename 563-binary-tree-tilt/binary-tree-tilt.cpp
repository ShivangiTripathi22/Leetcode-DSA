/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int tilt = 0;

    int total_tilt(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int left_tilt = total_tilt(root->left);
        int right_tilt = total_tilt(root->right);

        tilt += abs(left_tilt - right_tilt);

        return (left_tilt + right_tilt + root->val);
    }
    int findTilt(TreeNode* root) {

        total_tilt(root);
        return (tilt);
    }
};