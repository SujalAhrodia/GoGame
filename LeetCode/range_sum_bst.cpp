/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
// first solution
 
class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        if(!root)
            return 0;
        else
        {
            if(root->val<=R && root->val>=L)
                sum+=root->val;
            if(root->left)
                rangeSumBST(root->left, L, R);
            if(root->right)
                rangeSumBST(root->right, L, R);
        }
        return sum;
    }
};

// optimized solution 1

class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        if(!root)
            return 0;
        else
        {
            if(root->val > R)
                return rangeSumBST(root->left, L, R);
            if(root->val < L)
                return rangeSumBST(root->right, L, R);
            
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        }
        return sum;
    }
};

// optimized solution 2

class Solution {
public:
    int sum=0;
    int rangeSumBST(TreeNode* root, int L, int R) 
    {
        if(!root)
            return 0;
        else
        {
            if(root->val > R)
                return rangeSumBST(root->left, L, R);
            if(root->val < L)
                return rangeSumBST(root->right, L, R);
            else
                return root->val + rangeSumBST(root->left, L, root->val) + rangeSumBST(root->right, root->val, R);
        }
        return sum;
    }
};
