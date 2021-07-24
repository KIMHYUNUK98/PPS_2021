package week3;

public class _12_4 {
	public static void main(String[] args){
		
	}
	
	  public class ListNode {
	      int val;
	      ListNode next;
	      ListNode() {}
	      ListNode(int val) { this.val = val; }
	      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
	  }
	  
	  public ListNode middleNode(ListNode head) {
		  int size=0;
		  ListNode temp = head;
		  
		  while(temp!=null) {
			  size++;
			  temp=temp.next;
		  }
		  temp=head;
		  
		  size=size/2;
		  
		  for(int i = 0 ; i<size;i++) {
			 temp=temp.next;
		  }
		  
		  return temp;
	}

}
