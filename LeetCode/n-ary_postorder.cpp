/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void post(Node* root, vector<int>& ans)
    {
        if(root==NULL)
            return;
        
        for(Node* child : root->children)
            post(child, ans);

        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) 
    {
        vector<int> ans;
        post(root, ans);
        return ans;        
    }
};
