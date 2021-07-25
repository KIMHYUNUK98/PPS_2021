// vector ����� cin �̳� = �Ҵ��� �ƴ϶� push_back���� �� �־��ֱ�
// vector ����� ũ�⸦ �Ҵ������ runtime error�� �ȳ�.
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
        
        // sum ���� ���� �� nums�� ������ ��ŭ ������ �ؾ� Runtime error�� �߻� ����.
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