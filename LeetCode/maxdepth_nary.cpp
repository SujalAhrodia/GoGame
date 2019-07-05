//first solution

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
    int maxDepth(Node* root, int ans=0) 
    {
        if(!root)
            return 0;
        if(root->children.empty())
        {
            ans++;
            return ans;
        }
        int temp=1;
        for(Node* child : root->children)
            temp = max(temp,maxDepth(child, ans));
        
        return temp+1;
    }
};

// optimized solution

class Solution {
public:
    int maxDepth(Node* root) 
    {
        if(!root)
            return 0;
        int temp=1;
        for(Node* child : root->children)
            temp = max(temp,maxDepth(child)+1);
        return temp;
    }
};
