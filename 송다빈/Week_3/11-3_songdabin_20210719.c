typedef expuct {
    int size;
    int* sum;
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    int temp = 0;

    NumArray *obj = malloc(sizeof(NumArray));
    obj->size = numsSize;
    obj->sum = malloc(sizeof(int)*numsSize);

    for (int i = 0; i < numsSize; i++) {
        temp += nums[i];
        obj->sum[i] = temp;
    }

    return obj;
}

int numArraySumRange(NumArray* obj, int left, int right) {
    if (left == 0) return obj->sum[right];
    return obj->sum[right] - obj->sum[left-1];
}

void numArrayFree(NumArray* obj) {
    free(obj);
}