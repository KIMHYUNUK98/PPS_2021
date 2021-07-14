package week2;

import java.util.*;

public class _7_2 {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int M = scan.nextInt();
		int N = scan.nextInt();
		int size = N-M+1;
		String numstr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
		String arr[] = new String[size];
		Map<Integer,String> map = new HashMap<>();
		String str;
		
		for(int i =0; i<size; i++ ) {
			arr[i]=Integer.toString(M++);
			str = numstr[(arr[i].charAt(0)-'0')];
			if(M>10) {
				str += numstr[(arr[i].charAt(1)-'0')];
			}
			arr[i]=str;
			int num = M-1;
			map.put(num,str);
		}
		
		List<Integer> keySetList = new ArrayList<>(map.keySet());
		Collections.sort(keySetList,(o1,o2)->(map.get(o1).compareTo(map.get(o2))));
		
		int i=0;
		
		for(int key : keySetList) {
			if(i%10==0 && i!=0)
				System.out.println();
			
			System.out.print(key+" ");
			i++;
		}
		
	}

}
