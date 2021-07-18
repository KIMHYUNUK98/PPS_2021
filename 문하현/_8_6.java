package week2;

public class _8_6 {
	public static void main(){
		
	}
	
	public static int searchInsert(int[] nums,int target) {
		int i =0;
        
        if(target<=nums[0])
            return 0;
		
		while(i<nums.length-1) {
			if(target>nums[i] && target<=nums[i+1])
				return i+1;
			i++;
		}
		
		return i+1;
	}

}
