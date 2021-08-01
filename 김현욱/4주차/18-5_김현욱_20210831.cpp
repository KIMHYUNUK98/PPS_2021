// 1과 2의 합으로 숫자를 표현할 수 있는 개수는
// 숫자가 증가할 수록 피보나치 수열을 가지고 있다.
// 이 알고리즘은 논리적인 연산을 떠나서 개수의 증가하는 규칙을 파악하면 문제를 풀 수는 있다.
// 코딩은 수학이 아니기에 자세한 논리를 파악하는 것보다 전체적인 흐름과 규칙을 찾는 것이 더 중요

class Solution {
public:
    int climbStairs(int n) {
        int arr[n+1];
        arr[0] = 1;
        arr[1] = 1;
        for(int i = 2 ; i <= n ; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};