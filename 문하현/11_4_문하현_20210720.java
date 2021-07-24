package week3;

import java.util.Arrays;

public class _11_4 {
	public static void main(String[] args) {
		
	}
	
	public int largestPerimeter(int[] nums) {
       Arrays.sort(nums);
       for (int i = nums.length - 3; i >= 0; --i)
    	   if (nums[i] + nums[i+1] > nums[i+2])
    		   return nums[i] + nums[i+1] + nums[i+2];
       return 0;
	}

}
