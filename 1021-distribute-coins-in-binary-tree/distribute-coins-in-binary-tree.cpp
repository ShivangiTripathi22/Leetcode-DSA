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
int move=0;
int post_order(TreeNode* root){
    if(root==nullptr)
        return 0;
    int l=post_order(root->left);
    int r=post_order(root->right);
    move+=abs(l)+abs(r);

    return root->val+l+r-1;
}
    int distributeCoins(TreeNode* root) {
        post_order(root);
        return move;
        
    }
};