package week4;

public class _5_8 {
	class Solution {
	    public int solution(int left, int right) {
	    	int answer = 0;
	        for(int i=left; i<right+1; i++){
	            int cnt = 0;
	            for(int j=1; j<=i; j++){
	                if(i%j == 0){
	                    cnt ++;
	                }
	            } 
	            if(cnt%2 ==0){
	                answer = answer + i;
	            }else{
	                answer = answer -i;
	            }
	        }
	        return answer;
	    }
	}

}
