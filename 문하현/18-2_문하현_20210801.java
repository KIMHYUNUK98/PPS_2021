package week4;

import java.util.*;

public class _18_2 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int d[] = new int[100001];
		
		d[1]=1;
		
		for(int i =2; i<=n;i++) {
			if(i<2)
				d[i]=d[i-1]+1;
			else if(i<5)
				d[i] = Math.min(d[i-1],d[i-2])+1;
			
			else if(i<7)
				d[i] = Math.min(d[i-5], Math.min(d[i-1], d[i-2]))+1;
			else
				d[i] = Math.min(d[i-7], (Math.min(d[i-5], Math.min(d[i-1], d[i-2]))))+1;	
		}
		System.out.println(d[n]);
	}
}
