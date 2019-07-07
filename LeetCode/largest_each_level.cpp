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
    vector<int> largestValues(TreeNode* root) 
    {
        queue<TreeNode*> q;
        vector<int> ans;
        
        if(!root)        
            return {};
        
        q.push(root);

        while(!q.empty())
        {
            int macs = INT_MIN;
            int n=q.size();
            
            for(int i=0; i<n; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                
                macs = max(macs, temp->val);

                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(macs);
        }
        return ans;
    }
};
