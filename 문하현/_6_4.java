package week2;

import java.util.*;

public class _6_4 {
	public static void main(String[] args){
		
	}
	
	public class ListNode {
			int val;
		    ListNode next;
		    
		    ListNode() {
		    	
		    }
		    
	    	ListNode(int val) { 
	    		this.val = val; 
	    	}
	    	
	 		ListNode(int val, ListNode next) { 
	 			this.val = val; 
	 			this.next = next; 
	 		}
		 }
	
	public static boolean isPalindrome(ListNode head) {
		boolean answer = true;
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		ListNode node = head;
		
		while(node!=null) {
			list.add(node.val);
			node = node.next;
		}
		
		int size = list.size();
		for(int i = 0; i<(size/2);i++) {
			if(list.get(i).intValue() != list.get(size-i-1).intValue()) {
				answer = false;
				break;
			}
		}
		return answer;
	}

}
