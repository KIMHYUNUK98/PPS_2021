package week1;

import java.util.*;

public class _2_7 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String str1;
		String str2;
		
		str1 = scan.nextLine();
		str2 = scan.nextLine();
		
		System.out.print(backspaceCompare(str1,str2));
		
	}
	
	public static boolean backspaceCompare(String s,String t) {
		String newStr1="";
		String newStr2="";
		int count =0;
		
		for(int i =s.length()-1;i>=0;i--) {
			char chr = s.charAt(i);
			if(chr == '#') {
				count++;
			}
			else {
				if(count>0) {
					count--;
				}
				else {
					newStr1 += chr;
				}
			}
		}
		
		count =0;
		
		for(int i =t.length()-1;i>=0;i--) {
			char chr = t.charAt(i);
			if(chr == '#') {
				count++;
			}
			else {
				if(count>0) {
					count--;
				}
				else {
					newStr2 += chr;
				}
			}
		}
		
		if(newStr1.equals(newStr2))
			return true;
		
		
		return false;
		
	}

		
}
