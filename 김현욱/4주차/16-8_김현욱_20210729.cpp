// dp는 연속적인 연산이 할당되는 배열이다
// 피보나치 수열처럼 이전의 값들을 다시 사용해야 하는 경우에 사용하게 되는 동적 프로그래밍 방법
// 수학적 귀납법, 귀납적 연산을 처리할 때 유용하다
// 초기값을 설정할 때 생각하게 되는 논리를 for문을 통해서 반복 처리하면 된다

class Solution {
public:
    int rob(vector<int>& A) {
        if (A.size() == 1) {
            return A[0];
        }
        if (A.size() == 2) {
            return max(A[0], A[1]);
        }
        if (A.size() == 3) {
            return max(A[0] + A[2], A[1]);
        }
        int n = A.size();
        vector<int> dp(n, 0);
        dp[0] = A[0];
        dp[1] = max(A[0], A[1]);
        dp[2] = max(A[0] + A[2], A[1]);
        for (int i = 3; i < n; ++i) {
            dp[i] = A[i] + max(dp[i - 2], dp[i - 3]);
        }
        return *max_element(dp.begin(), dp.end());
    }
};