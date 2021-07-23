int* sortArrayByParityII(int* nums, int numsSize, int* returnSize){
    int odd = 1, even = 0;
    int * sortArr = (int *) malloc(sizeof(int) * (* returnSize = numsSize));

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            sortArr[even] = nums[i];
            even += 2;
        }
        else {
            sortArr[odd] = nums[i];
            odd += 2;
        }
    }

    return sortArr;
}