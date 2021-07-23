void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int idx, idx_1, idx_2;

    idx = nums1Size - 1;
    idx_1 = m - 1;
    idx_2 = n - 1;
    
    while (idx_1 >= 0 && idx_2 >= 0) {
        if (nums1[idx_1] > nums2[idx_2]) {
            nums1[idx--] = nums1[idx_1--];
        }
        else {
            nums1[idx--] = nums2[idx_2--];
        }
    }
    
    while (idx_2 >= 0) {
        nums1[idx--] = nums2[idx_2--];
    }
}