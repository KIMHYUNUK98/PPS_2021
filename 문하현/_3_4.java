package week1;

import java.util.*;

public class _3_4 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		long doorN = 0;
		long first = 0;
		
		doorN = scan.nextLong();
		first = scan.nextLong();
			
		if(doorN>6)
			System.out.println("Love is open door");
		else {
			for(int i =1;i<doorN;i++) {
				first=(first+1)%2;
				System.out.printf("%d\n",first);
			}
		}
	}
}
