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
    void dfs(TreeNode* root,int& prev, int& ans){
        if (root == NULL){
          return;
        }
        dfs(root->left,prev, ans);
        if (prev >=0){
            ans = min (ans, abs(prev - root->val));
        }
        prev = root->val;
        dfs(root->right,prev, ans);
    }
    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = -1;
        dfs(root, prev, ans);
        return ans;
    }
};