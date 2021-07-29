int maxSubArray(int* nums, int numsSize){
    int sum = 0, result = -10000000000000000;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        if (sum < nums[i]) sum = nums[i];
        if (sum > result) result = sum;
    }
    
    return result;
}