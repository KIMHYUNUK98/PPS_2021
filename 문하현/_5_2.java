package week1;

import java.util.*;

public class _5_2 {
	public static void main(String[] args){
		int t = 0;
		float num =0;
		String str;
		String numS;
		Scanner scan = new Scanner(System.in);
		
		t = scan.nextInt();
		scan.nextLine();
		
		for(int i =0; i<t; i++) {
			num=scan.nextFloat();
			str=scan.nextLine();
			str=str.replaceAll("\\s+","");
			
			for(int j =0;j<str.length();j++) {
				switch(str.charAt(j)) {
					case'@':num=num*3; break;
					case'%':num=num+5; break;
					case'#':num=num-7; break;
				}
			}
			System.out.printf("%.2f\n",num);
		}
	}
}
