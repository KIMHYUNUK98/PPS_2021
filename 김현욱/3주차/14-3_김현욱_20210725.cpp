/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
        int m(Node *root,int b)
        {
            if(root)   
                for(int i=0;i<root->children.size();i++)
                {
                   b=max(m(root->children[i],0),b);
                }
            return b+1;
        }
    int maxDepth(Node* root) {
        int b=0;
        if(!root)
            return 0;
         return m(root,b);
    
    }

};