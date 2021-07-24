package week3;

import java.util.ArrayList;
import java.util.Arrays;

public class _12_2 {
	public static void main(String[] args){
		
	}
	
	public static void merge(int[] nums1, int m, int[] nums2, int n) {
		int j=0;
        
        for(int i = m; i<m+n; i++) {
        	nums1[i]=nums2[j++];
        }
        
        Arrays.sort(nums1);
    }

}
