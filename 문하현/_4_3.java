package week1;

import java.util.*;

public class _4_3 {
	public static void main(String[] args) {
		int num;
		int numArray[]=new int[10];
		Scanner scan = new Scanner(System.in);
		
		for(int i =0;i<10;i++) {
			num=scan.nextInt();
			numArray[i]=num%42;
		}
		
		Arrays.sort(numArray);
		
		int count=10;
	
		for(int i =0; i<9; i++) {
			if(numArray[i]==numArray[i+1])
				count--;
		}
		
		System.out.println(count);
	}

}
