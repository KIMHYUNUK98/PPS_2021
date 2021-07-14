package week1;
/* 1-1. 백준2920번:음계 */ 
import java.util.*;

public class _1_1 {
	public static void main(String[] args){
		// 배열 생성
		String num;
		String ascending = "1 2 3 4 5 6 7 8";
		String descending = "8 7 6 5 4 3 2 1";
		
		
		// 입력 받기
		Scanner scan = new Scanner(System.in);
		
		num = scan.nextLine();
		
		if(ascending.equals(num))
			System.out.println("ascending");
		else if(descending.equals(num))
			System.out.println("descending");
		else 
			System.out.println("mixed");		
	}		
}
