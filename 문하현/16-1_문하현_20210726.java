package week4;

public class _16_1 {
	
	
	class Solution {
	    public boolean divisorGame(int n) {
	        // n이 짝수이면 Alice가 이기고
	    	// n이 홀수이면 Bob이 이긴다.
	    	
	    	if(n%2 == 0)
	    		return true;
	    	else
	    		return false;
	    }
	}

}
