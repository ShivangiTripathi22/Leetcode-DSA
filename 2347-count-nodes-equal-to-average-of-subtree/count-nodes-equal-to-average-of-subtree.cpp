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
    int averageOfSubtree(TreeNode* root) {
        average(root);
        return result;
    }
        int result=0;
        vector<int>average(TreeNode* root){

          if (root == nullptr)
            return {0, 0};
        
            vector<int>l=average(root->left);
            vector<int>r=average(root->right);
            int sum=l[0]+r[0]+root->val;
            int count=l[1]+r[1]+1;
            int avg=sum/count;
            if(avg==root->val)
              result++;

            return {sum,count};
        }
        
    
};