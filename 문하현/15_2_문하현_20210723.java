package week3;

import week3._15_1.TreeNode;

public class _15_2 {
	
	public class TreeNode{
		int val;
		TreeNode left;
		TreeNode right;
		TreeNode() {}
		TreeNode(int val){this.val = val;}
		TreeNode(int val, TreeNode left, TreeNode right){
			this.val = val;
			this.left = left;
			this.right =right;
		}
	}
	
	class Solution {
		int xDepth=0;
	    int yDepth=0;
	    int xParent = 0;
	    int yParent = 0;
	    
	    public boolean isCousins(TreeNode root, int x, int y) {
	        DFS(root,x,y,0,-1);
	        return (xDepth==yDepth) && (xParent!=yParent);
	    }
	    
	    public void DFS(TreeNode root, int x, int y, int depth,int parent){
	        if(root.val==x) {
	            xDepth = depth;
	            xParent = parent;
	        }
	        
	        if(root.val==y) {
	            yDepth = depth;
	            yParent = parent;
	        }
	            
	        if(root.left!=null) DFS(root.left,x,y,depth+1, root.val);
	        if(root.right!=null) DFS(root.right,x,y,depth+1, root.val);
	    }
	}
}
