package week2;

import java.util.LinkedList;

public class _8_3 {
	public static void main(String[] args){
		
	}
	
	class Solution{
		public ListNode reverseList(ListNode head){
			ListNode node = null;
			
			while(head != null) {
				ListNode curr = head;
				head = head.next;
				curr.next = node;
				node=curr;
			}
			
			return node;
		}
		
		public class ListNode{
			int val;
			ListNode next;
			ListNode(){}
			ListNode(int val){this.val = val;}
			ListNode(int val,ListNode next){
				this.val = val;
				this.next=next;
			}
		}
	}

}
