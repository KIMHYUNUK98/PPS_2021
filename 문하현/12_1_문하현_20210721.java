package week3;

import java.util.ArrayList;

public class _12_1 {
	public static void main(String[] args){
		
	}
	
	public int[] sortArrayByParityII(int[] nums) {
		int[] answer = new int[nums.length];
		ArrayList<Integer> odd = new ArrayList<Integer>();
		ArrayList<Integer> even = new ArrayList<Integer>();
		
		for(int i = 0;i<nums.length;i++){
			if((nums[i]%2)==0)
				even.add(nums[i]);
			else
				odd.add(nums[i]);
		}
        
        int j=0,k=0;
        
		for(int i = 0; i<nums.length;i++) {
			if((i%2)==0)
				answer[i]=even.get(j++);
			else
				answer[i]=odd.get(k++);
		}
        return answer;
    }
}
