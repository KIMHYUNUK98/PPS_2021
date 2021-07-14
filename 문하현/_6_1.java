package week2;

import java.util.*;

public class _6_1 {
	public static void main(String[] args){
		LinkedList<Integer> queue = new LinkedList<>();
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		for(int i=1; i<=N; i++)
			queue.add(i);
		
		while (queue.size()!=1) {
			queue.poll();
			queue.add(queue.poll());
		}
		
		System.out.print(queue.poll());
	}
}
