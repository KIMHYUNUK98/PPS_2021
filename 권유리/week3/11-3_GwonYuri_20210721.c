typedef struct {
    int* nums;
    int numsSize;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    NumArray* obj = (NumArray*)malloc(sizeof(NumArray));
    obj->nums = nums;
    obj->numsSize = numsSize;
    return obj;
}

int numArraySumRange(NumArray* obj, int left, int right) {
   int result = 0;
    for (int k = left; k <= right && k < obj->numsSize; k++) {
        result += obj->nums[k];
    }
    return result;
}

void numArrayFree(NumArray* obj) {
    free(obj);
}
