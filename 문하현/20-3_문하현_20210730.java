package week4;

import java.util.ArrayList;
import java.util.List;

public class _20_3 {
	public static void main(String[] args){
		String[] str= {"Hello","Alaska","Dad","Peace"};
		findWords(str);
		
	}
	
	static List<String> list = new ArrayList();
    public static String[] findWords(String[] words) {
    	String[] answer= new String[words.length];
    	String[] row= {"QWERTYUIOPqwertyuiop","ASDFGHJKLasdfghjkl","ZXCVBNMzxcvbnm"};
    	
    	for(int i =0;i<words.length;i++) {
			if(row[0].indexOf(words[i].charAt(0))!=-1) {
				checkNext(row[0],words[i]);
			}
			
			else if(row[1].indexOf(words[i].charAt(0))!=-1) {
				checkNext(row[1],words[i]);
			}
			
			else if(row[2].indexOf(words[i].charAt(0))!=-1) {
				checkNext(row[2],words[i]);
			}
    	}
    	answer = list.toArray(new String[list.size()]);
    
    	return answer;
        
    }
    
    public static void checkNext(String str, String temp) {
    	int len = temp.length();
    	for(int i =0; i <len; i++) {
    		if(str.indexOf(temp.charAt(i))==-1)
    			break;
    		if(i+1==len)
    			list.add(temp);
    	}
    }

}
