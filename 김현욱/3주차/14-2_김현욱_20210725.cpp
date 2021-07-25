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
    int sum=0,s=0;
public:
    int sumRootToLeaf(TreeNode* root) {
        fun(root);
        return s;
        
    }
    int fun(TreeNode* root)
    {
           
        if(root->left==NULL&&root->right==NULL){
            
            s=s+ sum*2+root->val;
            return 0;
        }
        
        sum=sum*2+root->val;
        if(root->left!=NULL)
        sumRootToLeaf(root->left);
        if(root->right!=NULL)
        sumRootToLeaf(root->right);
        sum-=root->val;
        sum/=2;
        return 0;
    }
};