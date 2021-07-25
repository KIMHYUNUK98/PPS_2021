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
    void inorder(TreeNode* root, set<int> *sset)
    {
        if(root == NULL)
            return;
        
        inorder(root->left, sset);
        sset->insert(root->val);
        inorder(root->right, sset);
            
    }
    bool isUnivalTree(TreeNode* root) 
    {
        if(root == NULL)
            return true;
        
        set<int> arr;
        inorder(root, &arr);
        
        return arr.size() == 1;
    }
};

