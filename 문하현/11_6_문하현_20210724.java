package week3;

import java.util.Collections;
import java.util.LinkedList;
import java.util.Stack;

public class _11_6 {
	public static void main(String[] args){
		
	}
	
	class MinStack {

	    // initialize your data structure here.
		LinkedList<Integer> stack;
		
	    public MinStack() {
	        stack = new LinkedList<>();
	    }
	    
	    public void push(int val) {
	        stack.addLast(val);
	    }
	    
	    public void pop() {
	        stack.pollLast();
	    }
	    
	    public int top() {
	        return stack.peekLast();
	    }
	    
	    public int getMin() {
	    	return Collections.min(stack);
	    }
	}


}
