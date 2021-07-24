class Solution {
public:
    bool search(vector<int>& nums, int target) {

       set<int> s(nums.begin(),nums.end());
       if(s.count(target)){
               return true;
        }
        return false;
    }
};