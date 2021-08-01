package week4;

import java.util.*;

public class _4_4 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		
		for(int test=1;test<=t;test++) {
			int k = scan.nextInt(); // k층
			int n = scan.nextInt(); // n호
			
			int[][] person = new int[15][15];
			
			// 0층 사람 수
			for(int i =1; i<=14; i++) {
				person[0][i] = i;
			}
			
			// k층 1호는 모두 1
			for(int i =1;i<=14;i++)
				person[i][1] = 1;
			
			// 1층부터 14층 까지
			for(int i = 1;i<=14; i++) {
				//2 호부터 14호까지
				for(int j=2;j<=14;j++) {
					// i-1층의 아래 값과 j-1호의 값 더하기
					person[i][j] = person[i][j-1] +person[i-1][j];
				}
			}
			System.out.println(person[k][n]);
		}
	}

}
