package week2;

import java.util.*;

public class _7_3 {
	public static void main(String[] args){

	}
	
	class Solution{
		public int majorityElement(int nums[]){
			Arrays.sort(nums);
            int count=0;
            int max=0;
            int result=0;
        
            if(nums.length == 1){
                return nums[0];
            }
			
			for(int i=0;i<nums.length-1;i++){
				if(nums[i]==nums[i+1]){
					count++;
                    if(count >= nums.length/2){
                        return nums[i];
                    }
                }
				else {
					if(count>max)
						result=nums[i];
					count=0;
				}
            }
			return result;
		}
	}

}
