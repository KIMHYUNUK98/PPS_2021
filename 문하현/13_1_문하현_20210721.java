package week3;

import java.util.*;

public class _13_1 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		int k = scan.nextInt();
		int[] a = new int[n];
		
		for(int i = 0;i<n;i++) {
			a[i]=scan.nextInt();
		}
		
		int count=0;
		
		for(int i = n - 1; i >= 0; i--) {
			// 현재 동전의 가치가 K보다 작거나 같아야 한다. 
			if(a[i] <= k) {
				// 현재 가치의 동전으로 구성할 수 있는 개수를 더해준다.
				count += (k / a[i]);
				k = k % a[i];
			}
		}
		System.out.println(count);
	}
}
