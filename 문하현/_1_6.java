import java.util.ArrayList;
import java.util.List;

public class _1_6 {
	public static void main(String[] args){
		
	}
	
	public List<List<Integer>> generate(int numRows) {
		List<List<Integer>> arr = new ArrayList<>();
		
		for(int i =0;i<numRows;i++) {
			
			List<Integer> arrayRowItems = new ArrayList<>();
			
			for(int j=0;j<=i;j++) {
				if(j==0 || j ==i)
					arrayRowItems.add(1);
				else {
					int prev = arr.get(i-1).get(j-1);
					int next = arr.get(i-1).get(j);
					arrayRowItems.add(prev+next);
				}
			}
			arr.add(arrayRowItems);
		}
		
		return arr;
    }

}
