// �������� ���� ���ؼ� �ִ밪�� ã�°�
// �̿����� ���� ���� �湮���� ���� ä �ִ밪�� ã�� ��
// ���� �迭���� ó������ ������ �����ϴ� ������ ���� ä �ִ밪�� ã�� ������ 
// dp �迭�� ���ؼ� �����ϸ� max�� ã�´�.
// 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        int ans = 0;
        ans = dp[0] = nums[0];
        
        for(int i = 1 ; i < nums.size(); i++) {
            dp[i] = max(dp[i-1] + nums[i], nums[i]);   // dp �迭�� ���� ������ �ִ밪�� �Ʒ��� ��� �ֽ�ȭ
            ans = max(dp[i] , ans);         // max�� return ���� �ִ밡 �Ǿ�� �Ѵ�.
        }
        return ans;
    }
};