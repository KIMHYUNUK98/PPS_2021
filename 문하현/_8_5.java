package week2;

public class _8_5 {
	public static void main(String[] args){
		
	}
	
	public static int search(int[] nums, int target) {
		int mid;
		int start=0;
		int end=nums.length-1;
		
		while(start>=end) {
			mid = (start+end)/2;
			if(nums[mid]==target)
				return mid;
			else if(nums[mid]>target)
				end=mid-1;
			else
				start = mid+1;
		}
		return -1;
		
    }
}
