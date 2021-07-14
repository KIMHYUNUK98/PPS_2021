package week1;

import java.util.*;

public class _1_3 {
	public static void main(String[] args){
		int g[] = {1,2,3};
		int s[] = {1,1};
		int result = findContentChildren(g,s);
		System.out.printf("%d\n",result);
	}

	public static int findContentChildren(int[] g, int[] s) {
	    int count = 0;
	    int index = 0;
	    int gSize = g.length;
	    int sSize = s.length;
	    
	    Arrays.sort(g);
	    Arrays.sort(s);
	    
	    for(int i = 0; i<gSize;i++){
	        for(int j = index; j<sSize; j++){
	            if(s[j]>=g[i]){
	                index=j+1;
	                count++;
	                break;
	            }
	        }
	    }
	
	    return count;
	}
}
