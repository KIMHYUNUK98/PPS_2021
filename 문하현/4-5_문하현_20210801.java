package week4;

public class _4_5 {
	public static void main(String[] args){
		
	}
	class Solution {
	    public boolean isPowerOfFour(int n) {
	        while(n>0) {
	        	if(n==1)
	        		return true;
	        	if(n%4!=0)
	        		return false;
	        	else
	        		n=n/4;
	        }
	        return false;
	    }
	}
}
