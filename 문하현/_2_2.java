package week1;

import java.util.*;

public class _2_2 {
	public static void main(String[] args){
		int num = 0;
        int count = 0;
        String str;
        
        Scanner scan = new Scanner(System.in);
        num = scan.nextInt();
     
        int result[] = new int[num];

        for(int i =0; i<num; i++){
            result[i]=0;
            count = 0;
            str = scan.next();
            
            for(int j = 0; j<str.length();j++){
                if(str.charAt(j) == 'O'){
                    count++;
                    result[i] += count;
                }
                else if(str.charAt(j) == 'X'){
                    count = 0;
                    result[i] += count;
                }
            }
        }

        for(int i = 0; i<num; i++){
            System.out.printf("%d\n",result[i]);
        }   
     
	}
}
