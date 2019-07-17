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
    void check(TreeNode* root, vector<int> &t)
    {
        if(!root)
            return;
        if(!root->left && !root->right)
        {
            t.push_back(root->val);
            return;
        } 
        else
        {
            check(root->left, t);
            check(root->right, t);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> t1,t2;
        check(root1,t1);
        check(root2,t2);
        return t1==t2;
    }
};


// optimized solution

class Solution {
public:
    void check(TreeNode* root, vector<int> &t)
    {
        if(!root->left && !root->right)
        {
            t.push_back(root->val);
            return;
        } 
        if(root->left)
            check(root->left, t);
        if(root->right)
            check(root->right, t);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        vector<int> t1,t2;
        check(root1,t1);
        check(root2,t2);
        return t1==t2;
    }
};
