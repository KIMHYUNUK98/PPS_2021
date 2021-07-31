// vector에서 중복 원소를 제거하는 방법
// sort정렬을 시키고 unique로 중복된 수를 쓰레기 값으로 맨 뒤로 보낸뒤
// erase함수를 사용해 제거한다.

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