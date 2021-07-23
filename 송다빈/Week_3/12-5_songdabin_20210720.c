int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int * result = malloc(sizeof(int) * nums1Size);
    int j, size = 0;
    

    for (int i = 0; i < nums1Size; i++) {
        j = 0;

        while (j < nums2Size && nums2[j] != nums1[i]) j++;
        for (; j < nums2Size && nums2[j] <= nums1[i] ; j++);

        result[size++] = j < nums2Size ? nums2[j] : -1;
    }
    *returnSize = size;
    
    return result;
}