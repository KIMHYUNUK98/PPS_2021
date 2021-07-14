package week2;

import java.util.ArrayList;
import java.util.Arrays;

public class _8_4 {
	public static void main(String[] args){
		
	}
	public static int removeDuplicates(int[] nums){
		int count=1;
		Arrays.sort(nums);
	
		for(int i =0;i<nums.length-1;i++) {
			if(nums[i]!=nums[i+1]) {
				nums[count++]=nums[i+1];
			}
		}
		
		return count;
			
	}

}
