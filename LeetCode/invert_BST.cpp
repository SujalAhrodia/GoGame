// first solution

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
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root)
        {
            TreeNode* temp = invertTree(root->left);
            root->left = invertTree(root->right);
            root->right = temp;    
        }
        return root;
    }
};

// optimized solution

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(!root)
            return NULL;
        if(!root->left && !root->right)
            return root;
        else
        {
            TreeNode* temp = invertTree(root->left);
            root->left = invertTree(root->right);
            root->right = temp;    
        }
        return root;
    }
};
