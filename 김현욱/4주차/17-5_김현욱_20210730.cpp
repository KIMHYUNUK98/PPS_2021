// vector���� �ߺ� ���Ҹ� �����ϴ� ���
// sort������ ��Ű�� unique�� �ߺ��� ���� ������ ������ �� �ڷ� ������
// erase�Լ��� ����� �����Ѵ�.

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        vector<int> arr;
        
        for(int i = 0 ; i < nums1.size() ; i++) {
            for(int j = 0 ; j < nums2.size() ; j++) {
                if(nums1[i] == nums2[j]) count++;
            }
            if(count > 0) {
                arr.push_back(nums1[i]);
            }
            count = 0;
        }
        
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        
        return arr;
    }
};