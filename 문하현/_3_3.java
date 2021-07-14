package week1;

import java.util.*;

public class _3_3 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String str;
		str = scan.nextLine();
		char change;
		
		for(int i = 0; i< str.length();i++) {
			change = str.charAt(i);
			
			switch(change) {
			case 'A': change = 'X'; break;
			case 'B': change = 'Y'; break;
			case 'C': change = 'Z'; break;
			default:change = (char)(str.charAt(i)-3);
			}
			
			System.out.print(change);
		}
		
	}
}
