int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    *returnSize=numsSize;

    int i, j;
    int *res = (int *)calloc(*returnSize,sizeof(int *));

    for (i = 0; i < numsSize; i++) {
        for (j = (i + 1) % numsSize; i != j; j = (j + 1) % numsSize) {
            if (nums[j] > nums[i]) {
                res[i] = nums[j];
                break;
            }
        }
        if (i == j) res[i] = -1;
    }

    return res;
}