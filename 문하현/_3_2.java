package week1;

import java.util.*;

public class _3_2 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String str;
		str=scan.nextLine();
		
		for(int i =0; i<str.length();i++) {
			System.out.print(str.charAt(i));
			if(i%10 == 9)
				System.out.println();
		}
	}
}
