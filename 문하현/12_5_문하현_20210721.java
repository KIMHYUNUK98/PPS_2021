package week3;

import java.util.Arrays;


public class _12_5 {
	public static void main(String[] args){
		
	}
	public static int[] nextGreaterElement(int[] nums1, int[] nums2) {
		int[] answer = new int[nums1.length];
		int length2 = nums2.length;
		int length1 = nums1.length;
		int count = 0;
		
		for(int i =0; i<length1;i++) {
			boolean check = false;
			answer[i]=-1;
			for(int j =0; j<length2;j++) {
				if(nums1[i]==nums2[j])
					check = true;
				if(nums1[i] < nums2[j] && check){
					answer[i] = nums2[j];
                	break;
				}
					
			}

		}
		
        return answer;
    }

}
