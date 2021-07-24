package week3;

import java.util.ArrayList;

public class _11_5 {
	public static void main(String[] args){
		
	}
	
	public static int calPoints(String[] ops) {
		ArrayList<Integer> list = new ArrayList<Integer>();
		int result=0;
		
		for(String str:ops) {
			int n = list.size();
			
			if(str.equals("C"))
				list.remove(n-1);
			else if(str.equals("D"))
				list.add(list.get(n-1)*2);
			else if(str.equals("+"))
				list.add(list.get(n-2)+list.get(n-1));
            else{
                list.add(Integer.parseInt(str));
            }
		}
		
		
		for(int i=0;i<list.size();i++) {
			result+=list.get(i);
		}
	
		return result;
    }

}
