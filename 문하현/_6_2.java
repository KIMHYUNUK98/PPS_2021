package week2;

import java.util.*;

public class _6_2 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int N,K = 0;
		N=scan.nextInt();
		K=scan.nextInt();
		
		LinkedList<Integer> queue = new LinkedList<>();
		ArrayList<Integer> array = new ArrayList<>();
		
		for(int i =0; i<N;i++)
			queue.add(i+1);
		
		while(queue.size()>0) {
			int i =0;
			for(i = 0 ;i<K-1;i++) {
				queue.add(queue.poll());
			}
			int top_num = queue.peek();
			array.add(top_num);
			queue.poll();
		}
			
			String list = Arrays.toString(array.toArray()).replace("[", "<").replace("]", ">");
			System.out.println(list);
		}	
}
