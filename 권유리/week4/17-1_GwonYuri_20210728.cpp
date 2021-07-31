class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int best = nums[0];
        
        for(int i=0; i<nums.size(); i++){
            sum = max(sum+nums[i], nums[i]);
            best = max(best, sum); 
        }
        
        return best; 
    }
};