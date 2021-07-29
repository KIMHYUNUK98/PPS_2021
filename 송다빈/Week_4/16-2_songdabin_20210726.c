void swap(int *nums, int a, int b){
    int t = nums[a];
    nums[a] = nums[b];
    nums[b] = t;
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *result = malloc(sizeof(int) * numsSize);
    int idx = 0;
    
    for(int i = 0; i < numsSize; ++i){
        while(nums[i] != i+1 && nums[nums[i]-1] != nums[i]){
            swap(nums, i, nums[i]-1);
        }
    }
    
    for(int i = 0; i < numsSize; ++i){
        if(nums[i] != i+1) result[idx++] = i+1;
    }
    *returnSize = idx;
    
    return result;
}