package week4;

import java.util.HashMap;

public class _20_1 {
	
	public static void main(String[] args) {
		
	}
	
	HashMap<Character,Character> map = new HashMap();
	
	class Solution {
	    public boolean isIsomorphic(String s, String t) {
	    	
	    	for(int i =0;i<s.length();i++) {
	    		char sc = s.charAt(i);
	    		char tc = t.charAt(i);
	    		
	    		if(i==0)
	    			map.put(sc, tc);
	    		
	    		else {
	    			if(map.containsKey(sc)) {
	    				if(map.get(sc) != tc)
	    					return false;
	    			}
	    			else if(map.containsValue(tc))
	    				return false;
	    		}
	    		map.put(sc, tc);
	    	}
	    	
	    	return true;
	    }
	}
}
