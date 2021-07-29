// dp�� �������� ������ �Ҵ�Ǵ� �迭�̴�
// �Ǻ���ġ ����ó�� ������ ������ �ٽ� ����ؾ� �ϴ� ��쿡 ����ϰ� �Ǵ� ���� ���α׷��� ���
// ������ �ͳ���, �ͳ��� ������ ó���� �� �����ϴ�
// �ʱⰪ�� ������ �� �����ϰ� �Ǵ� ���� for���� ���ؼ� �ݺ� ó���ϸ� �ȴ�

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