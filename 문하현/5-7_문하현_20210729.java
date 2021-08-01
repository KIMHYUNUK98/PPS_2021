package week4;

import java.util.*;

public class _5_7 {
	public static void main(String[] args) {	
		String[] strArray = {"c=","c-","dz=", "d-", "lj", "nj", "s=","z="};
		String str;
		int count=0;
		
		Scanner scan = new Scanner(System.in);
		
		str= scan.nextLine();
		
		for(int i = 0; i<strArray.length;i++) {
			if(str.contains(strArray[i])) {
				str=str.replaceAll(strArray[i],"1");
			}
		}
		
		for(int i =0; i <str.length();i++) {
				count++;
		}
		
		System.out.println(count);
	}

}
