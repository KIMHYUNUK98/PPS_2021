class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int j = 0;
        for(int i = m ; i < m+n ; i++) {
            nums1[i] = nums2[j++];
        }
        
        sort(nums1.begin(), nums1.end());
        
        cout << "[";
        for(int i = 0 ; i < m+n ; i++) {
            if(i != m+n-1)
                cout << nums1[i] << ",";
            else
                cout << nums1[i] << "]";
        }
    }
};