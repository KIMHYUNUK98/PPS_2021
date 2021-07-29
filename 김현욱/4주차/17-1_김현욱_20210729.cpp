// 연속적인 수를 더해서 최대값을 찾는것
// 이웃하지 않은 곳을 방문하지 않은 채 최대값을 찾는 것
// 숫자 배열에서 처음부터 끝까지 만족하는 조건을 가진 채 최대값을 찾는 문제는 
// dp 배열을 통해서 축적하면 max를 찾는다.
// 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        int ans = 0;
        ans = dp[0] = nums[0];
        
        for(int i = 1 ; i < nums.size(); i++) {
            dp[i] = max(dp[i-1] + nums[i], nums[i]);   // dp 배열에 축적 하지만 최대값은 아래로 계속 최신화
            ans = max(dp[i] , ans);         // max로 return 값이 최대가 되어야 한다.
        }
        return ans;
    }
};