package week2;

import java.util.*;

public class _7_1 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int N = scan.nextInt();
		
		int[][]arr = new int[N][2];
		
		Map<Integer,String> member = new HashMap<Integer,String>();
		
		for(int i = 0;i<N;i++) {
			arr[i][0]=scan.nextInt();
			arr[i][1]=i;
			String name=scan.nextLine();
			member.put(i, name);
		}
		
		Arrays.sort(arr, new Comparator<int[]>() {
			public int compare(int[]a, int[] b) {
				if(a[0]!=b[0]) return Integer.compare(a[0], b[0]);
				return 0;
			}
		});
		
		for(int i = 0; i<N ;i++) {
			System.out.println(arr[i][0]+member.get(arr[i][1]));
		}
	}

}
