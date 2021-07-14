package week1;

import java.util.*;

public class _4_1 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int score[] =new int[5];
		String s;
		
		for(int i = 0; i < 5;i++) {
			s=scan.nextLine();
			for(int j =0; j<4;j++) {
				String[] parsedSpace = s.split(" ");
				score[i]+=Integer.parseInt(parsedSpace[j]);
			}
		}
		int max= score[0];
		int index=1;
		
		for(int i =1;i<5;i++) {
			if(score[i]>max) {
				max=score[i];
				index=i+1;
			}
		}
		
		System.out.printf("%d %d",index,max);
		
	}

}
