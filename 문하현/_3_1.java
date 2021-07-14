package week1;

import java.util.*;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class _3_1 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String str;
		str=scan.nextLine();
		System.out.println(checkRecord(str));
	}
	
	public static boolean checkRecord(String s) {
		//'A'가 2보다 적어야 한다. 
		//'L'이 연속으로 3번 미만이어야 한다.
		
		String str = s;
		int count =0;
		int consecutive = 0;
		String pattern="\\W)\\1\\1";
		Matcher match;
		
		for(int i =0;i<str.length();i++) {
			if(str.charAt(i)=='A')
				count++;
			if(str.charAt(i)=='L')
				consecutive++;
			else consecutive=0;
			
			if(count > 1 || consecutive > 2)
				return false;
		}
		

		return true;
	}
}
