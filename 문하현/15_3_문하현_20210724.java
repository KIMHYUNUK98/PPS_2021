package week3;

import week3._15_2.TreeNode;

public class _15_3 {
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
		boolean check=true;
		
	    public boolean isUnivalTree(TreeNode root) {
	        if(root==null)
	        	return false;
	        DFS(root,root.val);
	        return check;
	    }
	    
	    public void DFS(TreeNode root,int val) {
	    	if(root.val != val) {
	    		check=false;
	    		return;
	    	}
	    	if(root.left!=null)
	    		DFS(root.left,val);
	    	if(root.right!=null)
	    		DFS(root.right,val);
	    }
	}

}
