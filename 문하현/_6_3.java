package week2;

import java.util.*;

public class _6_3 {
	public static void main(String[] args){
		
	}
	
	class MyQueue{
		/** Initialize your data structure here. */
		Stack<Integer> temp;
    	Stack<Integer> value;
    	
	    public MyQueue() {
	    	temp = new Stack<Integer>();
	    	value = new Stack<Integer>();
	   
	    }
	    
	    /** Push element x to the back of queue. */
	    public void push(int x) {
	    	if(value.isEmpty()) {
	    		value.push(x);
	    	}else {
	    		while(!value.isEmpty())
	    			temp.push(value.pop());
	    		
	    		value.push(x);
	    		
	    		while(!temp.isEmpty()) {
	    			value.push(temp.pop());
	    		}
	    		
	    		
	    	}
	    }
	    
	    /** Removes the element from in front of queue and returns that element. */
	    public int pop() {
	    	return value.pop();
	        
	    }
	    
	    /** Get the front element. */
	    public int peek() {
	    	return value.peek();
	        
	    }
	    
	    /** Returns whether the queue is empty. */
	    public boolean empty() {
	        return value.isEmpty();
	    }
	}
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */
