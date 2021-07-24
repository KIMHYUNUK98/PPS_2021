class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> ans;
        for (int num : findNums) {
        ans.push_back(-1);
        int index = std::find(nums.begin(), nums.end(), num) - nums.begin();
        for (int i = index; i < nums.size(); ++i)
            if (nums[i] > num) {
            ans.back() = nums[i];
            break;
            }
        }
        return ans;
    }
};