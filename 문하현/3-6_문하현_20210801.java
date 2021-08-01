package week4;

import java.util.*;

public class _3_6 {
	static int Answer;
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int T = Integer.parseInt(sc.nextLine());
		for(int test_case = 0; test_case<T; test_case++) {
			int N = Integer.parseInt(sc.nextLine());
            String in[] = sc.nextLine().split(" ");
            Answer = 0;
          
            for (int j = 0; j < N; j++) {
                int input = Integer.parseInt(in[j]);
                Answer = Answer^input;
            }
			
			System.out.println("Case #"+(test_case+1));
			System.out.println(Answer);
		}
		
	}
}
