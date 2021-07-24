package week3;

import java.util.*;
import java.math.BigInteger;

public class _12_6 {
	/* 데이터 타입이 커서 이 방법으로는 안된다.
	public static void main(String[] args){
		//Scanner scan = new Scanner(System.in);
		
		//int num = scan.nextInt();
		
		System.out.println(fibonacci(100));
		
		
	}
	
	//f(1) = 1, f(2) = 1, f(n > 2) = f(n − 1) + f(n − 2)
	
	public static BigInteger fibonacci(int num) {
		BigInteger bigInteger1 = BigInteger.ONE;
		
		if(num>2)
			return fibonacci(num-1).add(fibonacci(num-2));
		else return bigInteger1;
	}
	*/
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		int num = scanner.nextInt();

		// 피보나치 첫 번째(0)와 두 번째 값(1)
		// long 데이터 타입보다 결과 값이 더 크기 때문에 큰 수를 표현하기 위해서
		// BigInteger 사용
		BigInteger bigInteger0 = BigInteger.ZERO;
		BigInteger bigInteger1 = BigInteger.ONE;

		if (num == 0) {
			System.out.println(bigInteger0);
			return;
		} else if (num == 1) {
			System.out.println(bigInteger1);
			return;
		}

		BigInteger bigIntegerResult;

		for (int i = 1; i <= num; i++) {
			bigIntegerResult = bigInteger0.add(bigInteger1);
			bigInteger0 = bigInteger1;
			bigInteger1 = bigIntegerResult;
		}
		
		System.out.println(bigInteger0);
	}
}
