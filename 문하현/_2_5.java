package week1;

import java.util.*;

public class _2_5 {
	public static void main(String args[]){
		//모두 대문자로 바꾼다.
		//문장 입력받아서 솔트한다.
		//전 단어랑 현재 단어랑 같으면 카운트++하고
		//단어가 다르면 카운트 한 값을 정수 배열에 넣고 새로운 카운트
		//배열 안에서 제일 큰 값을 가져오고 그 인덱스 값에 맞는 char 가져옴
		Scanner scan = new Scanner(System.in);
		String str;
		
		str = scan.nextLine();
		str = str.toUpperCase();
		
		char[] charArr = str.toCharArray();
		Arrays.sort(charArr);
		String result = new String(charArr);
		
		int prev = 0;
		int now = 0;
		int j = 0;
		int count[] = new int[str.length()];
		char chr[] = new char[str.length()];
		
		chr[0]=result.charAt(0);
		
		for(int i = 0; i<result.length(); i++) {
			if(i>0) {
				if(result.charAt(i-1)==result.charAt(i)) {
					count[j]++;
				}
				else {
					chr[j+1]=result.charAt(i);
					j++;
				}
			}	
		}
	
		int max = count[0];
		int maxIndex = 0;
		
		for(int i = 1; i<count.length; i++) {
			if(count[i] > max) {
				max = count[i];
				maxIndex = i;
			}
		}
		
		int check = 0;
		
		for(int i =0;i<count.length; i++) {
			if(max == count[i])
			 check++;
		}
		
		if(check>1)
			System.out.println("?");
		else
			System.out.printf("%c",chr[maxIndex]);
		
	}

}
