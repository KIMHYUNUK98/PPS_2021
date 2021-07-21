// cout 출력은 제대로 되는데 return 해주면 이상한 -9999 값이 뜨는
// Time limit exceeded Error가 뜸

class KthLargest {
public:
    vector<int> large;
    int index = 0;
    
    KthLargest(int k, vector<int>& nums) {
        index = k;
        for(int i = 0 ; i < nums.size(); i++) 
            large.push_back(nums[i]);   
    }
    
    int add(int val) {
        large.push_back(val);
        int max = large.size();
        sort(large.begin(), large.end());
        
        cout << large[max - index];
        return large[max - index];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */