package week1;

import java.util.*;

public class _4_7 {
	public static void main(String[] args){
		int num = 0;
		Scanner scan = new Scanner (System.in);
		num=scan.nextInt();

		System.out.println(addDigits(num));
	}
	
	public static int addDigits(int num) {
		int sum=0;
		
		while(num>0) {
			sum+=num%10;
			num=num/10;
			
			if(sum > 9 && num == 0) {
				num = sum;
				sum = 0;
			}
		}
        
        return sum;
	}

}
