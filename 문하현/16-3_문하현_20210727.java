package week4;

import java.util.HashMap;

public class _16_3 {
	class Solution {
		int num=0;
	    public int romanToInt(String s) {
	
	    	String[] r = { "IV", "IX", "XL", "XC", "CD", "CM" };
	        int[] v = { 4, 9, 40, 90, 400, 900 };
	        
	        for(int i=0; i<6; i++) {
	            s = replaceRoman(s, r[i], v[i]);
	        }
	    	
	  
	    	for(int i =0; i<s.length();i++) {
		    	switch(s.charAt(i)) {
			    	case'I' : num+=1; break;
			    	case'V' : num+=5; break;
			    	case'X' : num+=10; break;
			    	case'L' : num+=50; break;
			    	case'C' : num+=100; break;
			    	case'D' : num+=500; break;
			    	case'M' : num+=1000; break;
		    	}
	    	}
	        return num;
	    }
	    
	    public String replaceRoman(String s, String keyword, int val) {
	        while(s.indexOf(keyword) != -1) {
	            num += val;
	            s = s.replace(keyword, "");
	        }
	        return s;
	    }
	}
}
