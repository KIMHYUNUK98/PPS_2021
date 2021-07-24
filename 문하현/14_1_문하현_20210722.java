package week3;

import java.util.*;

public class _14_1 {
	public static void main(String[] args){
		
	}
	
	public class TreeNode{
		int val;
		TreeNode left;
		TreeNode right;
		TreeNode() {}
		TreeNode(int val){this.val= val;}
		TreeNode(int val, TreeNode left, TreeNode right){
			this.val = val;
			this.left = left;
			this.right = right;
		}
	}
	//2개 리스트 만들기. 각 트리를 DFS 한 값들을 리스트에 넣고 두 리스트를 비교한다.
	public static boolean leafSimilar(TreeNode root1, TreeNode root2){
		List<Integer> list1 = new ArrayList<>();
		List<Integer> list2 = new ArrayList<>();
		
		DFS(root1, list1);
		DFS(root2, list2);
		
		return list1.equals(list2);
	}
	
	public static void DFS(TreeNode root, List<Integer> list) {
		if(root.left == null && root.right==null) {
			list.add(root.val);
			return;
		}
		
		if(root.left!=null) DFS(root.left,list);
		if(root.right!=null) DFS(root.right,list);
	}
}
