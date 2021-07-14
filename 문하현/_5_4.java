package week1;

import java.util.*;

public class _5_4 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		String str;
		
		str = scan.nextLine();
		
		System.out.println(dayOfYear(str));
	}
	
	public static int dayOfYear(String date) {
		int answere = 0;
		//1:31, 2/28|29, 3:31, 4:30, 5:31, 6:30, 7:31, 8:31, 9:30, 10:31, 11:30, 12:31
		//1900%4==0일때 2월은 29일
		String str[] = date.split("-");
		int year = Integer.parseInt(str[0]);
		int month = Integer.parseInt(str[1]);
		int day = Integer.parseInt(str[2]);
		int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
		
		if(year%4==0)
			days[1]=29;
		
		if(month==1)
			return day;
		
		for(int i =0; i<month-1;i++) {
			answere+=days[i];
		}
		
		answere+=day;
		
		return answere;
	}
}
