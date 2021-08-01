package week4;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class _16_2 {
	
	class Solution {
	    public List<Integer> findDisappearedNumbers(int[] nums) {
	    	Arrays.sort(nums);
	        int length = nums.length;
	        List<Integer> answer = new ArrayList<>();

	        for(int i = 0;i<length;i++) {
	            if(nums[i]!=i+1){
	                if(Arrays.binarySearch(nums, i+1)<0)
	                    answer.add(i+1);
	            }
	        }
	        return answer;
	    }
	}

}
