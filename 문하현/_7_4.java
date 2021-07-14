package week2;

import java.util.*;

public class _7_4 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String S;
		S=scan.nextLine();
		String str[] = new String[S.length()];
		
		for(int i =0;i<S.length();i++) {
			str[i]=S.substring(i);
		}
		
		Arrays.sort(str);
		
		for(int i =0;i<S.length();i++) {
			System.out.println(str[i]);
		}	
	}

}
