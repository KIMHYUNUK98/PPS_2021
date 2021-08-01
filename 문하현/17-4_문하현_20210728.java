package week4;

import java.util.Arrays;

public class _17_4 {
	public static void main(String[] args){
		
	}
	class Solution {
	    public boolean isAnagram(String s, String t) {
	    	String[] S=s.split("");
	    	String[] T=t.split("");
	    	Arrays.sort(S);
	    	Arrays.sort(T);
	    	
	    	s = Arrays.toString(S);
	    	t = Arrays.toString(T);
	    	
	    	if(s.equals(t))
	    		return true;
	    	
	    	return false;
	    }
	}

}
