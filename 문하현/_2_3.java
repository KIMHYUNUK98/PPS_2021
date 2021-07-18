package week2;


public class _2_3 {
	public static void main(String[] args){
		
		
	}
	
	public String longestCommonPrefix(String[] strs) {
		String answer="";
		if(strs.length == 0) return answer;
		
		answer = strs[0];
		
		for(int i =1;i<strs.length;i++) {
			String cur = strs[i];
			while(cur.indexOf(answer)!=0) {
				answer = answer.substring(0,answer.length()-1);
			}
		}
		
		//indexOf()는 주어진 요소가 배열에 있다면 그 첫번째 인덱스 값을 반환하고 없으면 -1을 반환한다. 
		
        return answer;
    }
}
