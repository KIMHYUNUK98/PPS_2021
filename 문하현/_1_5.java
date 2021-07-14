package week1;

import java.util.*;

public class _1_5 {
	public static void main(String[] args){
		
	}
	
	class Solution {
	    public int[] plusOne(int[] digits) {
	    	int end = 1;
	    	int size = digits.length;
	        
	        for(int i = size-1; i>=0; i--){
	        	if(end>0) {
	        		digits[i] = (digits[i]+1) % 10;
	        		if(digits[i] == 0)
	        			end = 1;
	        		else end=0;
	        	}
	        }
	        
	        if(end>0) {
	        	digits = new int[digits.length+1];
	        	digits[0] =1;
	        }
	        
	        return digits;
	    }
	}
}
