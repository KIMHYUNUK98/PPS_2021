class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return NULL;
        struct TreeNode* tmp;
        invertTree(root -> left);
        invertTree(root -> right);
        tmp = root->right;
        root->right = root->left;
        root->left = tmp;
        return root;
    }
};