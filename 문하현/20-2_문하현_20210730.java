package week4;

import java.util.Arrays;

public class _20_2 {
	public static void main(String[] args){
		
	}
	
	class Solution {
	    public int missingNumber(int[] nums) {
	    	Arrays.sort(nums);
	    	
	    	for(int i =0;i<nums.length;i++) {
	    		if(nums[i]!=i)
	    			return i;
	    	}
	    	
	    	return nums.length; 
	    }
	}

}
