package week4;

public class _5_6 {
	public static void main(String[] args){
		
	}
	
	class Solution {
	    public boolean isPalindrome(String s) {
	    	s = s.toLowerCase().replaceAll("[^a-zA-Z0-9]", "");
	    	
	    	for(int i=0; i<s.length()/2; i++){
	    	      if(s.charAt(i) != s.charAt(s.length()-i-1)){
	    	        return false;
	    	      }
	    	}
	    	
	    	return true;
	    }
	}

}
