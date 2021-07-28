class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        unordered_map<int,int> mp;
        
        for(int i = 0 ; i < nums.size() ; i++) {
            mp[nums[i]] = i;
        }
        
        for(int i = 0 ; i < nums.size() ; i++) {
            int ans = target - nums[i];
            if(mp.count(ans) > 0 && mp[ans] != i) {
                answer.push_back(i); 
                answer.push_back(mp[ans]); 
                break;
            }
        }
        return answer;
    }
};