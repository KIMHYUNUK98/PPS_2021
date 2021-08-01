package week4;

public class _17_1 {
	public static void main(String[] args) {
		
	}
	
	class Solution {
	    public int maxSubArray(int[] nums) {
	        int sum = nums[0];
	        
	        for(int i=0;i<nums.length;i++) {
	        	int temp=0;
	        	for(int j=i ; j<nums.length;j++) {
	        		temp = temp+nums[j];
	        		if(temp>sum)
	        			sum = temp;
	        	}
	        }
            return sum;
	    }
	}
}

