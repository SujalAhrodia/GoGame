/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root, int value=0) 
    {
        if(!root)
            return 0;
        value = value*2 + root->val;
        
        if(root->left == root->right)
            return value;
        else
            return sumRootToLeaf(root->left, value) + sumRootToLeaf(root->right, value);
    }
};
