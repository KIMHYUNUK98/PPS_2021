package week3;

import java.util.ArrayList;

public class _14_2 {
	public static void main(String[] args) {
		
	}
	
	
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
	    public int sum=0;
	    
	    public int sumRootToLeaf(TreeNode root) {
			if(root==null) return 0;
			dfsSum(root,0);
			return sum;
	    }
		
		public void dfsSum(TreeNode root,int num) {
			if(root==null) return;
			
			num = 2*num + root.val;
			
			if(root.left == null && root.right == null) {
				sum +=num;
				return;
			}
			
			dfsSum(root.left, num);
			dfsSum(root.right, num);
		}
	}

}
