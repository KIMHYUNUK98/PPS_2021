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
    bool isCousins(TreeNode* root, int x, int y) {
        
        map<int,int> parent;        
        map<int,int> height;
        height[root->val] = 0;
        parent[root->val] = -1;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            TreeNode* currNode = q.front();
            q.pop();
            
            if(currNode->left)
            {
                q.push(currNode->left);
                parent[currNode->left->val] = currNode->val;
                height[currNode->left->val] = height[currNode->val]+1;
            }
            if(currNode->right)
            {   
                q.push(currNode->right);
                parent[currNode->right->val] = currNode->val;
                height[currNode->right->val] = height[currNode->val]+1;

            }
        }
        
        return (height[x]==height[y] && parent[x]!=parent[y]);
    }
};