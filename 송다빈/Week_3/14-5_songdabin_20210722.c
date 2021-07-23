int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int index=0;
    int *res=(int*)malloc((nums1Size+nums2Size) * sizeof(int));

    for(int i = 0; i < nums1Size; i++) {
        for(int j = 0; j < nums2Size; j++) {
            if(nums1[i] == nums2[j]) {
                res[index++] = nums2[j];
                nums2[j] = -1;
                break;
            }
        }
    }
    *returnSize = index;

    return res;
}