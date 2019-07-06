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
    int ans=0;
    int maxAncestorDiff(TreeNode* root, int mini=INT_MAX, int maxi=INT_MIN) 
    {
        if(!root)
            return 0;
        
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
        ans = max(ans, abs(maxi - mini));
        
        maxAncestorDiff(root->left, mini, maxi);
        maxAncestorDiff(root->right, mini, maxi);
        
        return ans;
    }
};

// question specific tuning of the solution

class Solution {
public:
    int ans=0;
    int maxAncestorDiff(TreeNode* root, int mini=100000, int maxi=0) 
    {
        if(!root)
            return 0;
        
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
        ans = max(ans, abs(maxi - mini));
        
        maxAncestorDiff(root->left, mini, maxi);
        maxAncestorDiff(root->right, mini, maxi);
        
        return ans;
    }
};
