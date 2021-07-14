package week1;
import java.util.*;

public class _1_4 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int caseNum;
		int studentNum;
		int score[];
		int count[];
		double average[];
		double sum[];
		
		caseNum = scan.nextInt();
		average = new double[caseNum];
		sum = new double[caseNum];
		count = new int[caseNum];
		
		for(int i =0; i<caseNum; i++) {
			studentNum = scan.nextInt();
			score = new int[studentNum];
			for(int j = 0; j<studentNum; j++) {
				score[j] = Integer.parseInt(scan.next());
				sum[i]+=score[j];
			}
			average[i] = sum[i]/studentNum;
			
			for(int j = 0; j<studentNum; j++) {
				if(average[i]<score[j])
					count[i]++;
			}
			
			System.out.format("%.3f%%\n", 100.0 * count[i]/studentNum);
		}
		
		
	}

}
