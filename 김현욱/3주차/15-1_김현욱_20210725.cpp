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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        string t1 = serialize(p);
        string t2 = serialize(q);
        
        return t1 == t2;
    }
    
    string serialize(TreeNode *node) {
        if (node == nullptr) {
            return "#";
        }
        
        return to_string(node->val) + " " + 
               serialize(node->left) + " " + 
               serialize(node->right);
    }
};
