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
    //Returns the depth of the node root. If it is not balanced, then it updates answer to false and returns.
    int IsBalanced(TreeNode * root, bool &answer) {
        if (root == nullptr)
            return 0;
        int depth_left = IsBalanced(root->left, answer);
        if (!answer)
            return 0;
        int depth_right = IsBalanced(root->right, answer);
        if (abs(depth_left - depth_right) > 1) {
            answer = false;
            return 0;
        }
        return max(depth_left, depth_right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr)
            return true;
        bool answer = true;
        IsBalanced(root, answer);
        return answer;
    }
};