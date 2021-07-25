// vector 선언시 cin 이나 = 할당이 아니라 push_back으로 값 넣어주기
// vector 선언시 크기를 할당해줘야 runtime error가 안남.
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd, even;
        
        for(int i = 0 ; i < nums.size() ; i++) 
        {
            if(nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else 
                odd.push_back(nums[i]);
        }
        
        // sum 벡터 생성 시 nums의 사이즈 만큼 생성을 해야 Runtime error가 발생 안함.
        vector<int> sum(nums.size());
        int count = 0, index = 0;
        
        for(int i = 0 ; i < nums.size() ; i++) 
        {
            if(i % 2 == 0) 
                sum[i] = even[count++];
            else 
                sum[i] = odd[index++];
        }
        
        return sum;
    }
};