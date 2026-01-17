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
    int postIndex;

    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,
                     int start, int end) {
        if (start > end)
            return NULL;

        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);

        int inIndex = start;
        while (inorder[inIndex] != rootVal)
            inIndex++;

        root->right = helper(inorder, postorder, inIndex + 1, end);
        root->left  = helper(inorder, postorder, start, inIndex - 1);

        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postIndex = postorder.size() - 1;
        return helper(inorder, postorder, 0, inorder.size() - 1);
    }
};
