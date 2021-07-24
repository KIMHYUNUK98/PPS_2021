package week3;

public class _11_3 {
	public static void main(String[] args){
		
	}
	
	class NumArray{
		private int[] nums;
		
		public NumArray(int[] nums) {
			this.nums=nums;
			
		}
		
		public int sumRange(int left, int right) {
			int answer=0;
			
			for(int i =left;i<=right;i++)
				answer +=nums[i];
				
			return answer;
		}
	}
}
