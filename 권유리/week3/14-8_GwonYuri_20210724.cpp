class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N, -1);
        
        for(int i = 0; i < N; i++){
            for(int j = i+1; j < i+N; j++){
                if(nums[j%N] > nums[i]){
                    ans[i] = nums[j%N];
                    break;
                }
            }
        }
        
        return ans;
    }
};