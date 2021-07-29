int* countBits(int num, int* returnSize) {
    int* result = (int*) malloc(sizeof(int) * (num+1));

    *returnSize = num + 1;
    result[0] = 0;

    for (int i = 1; i <= num; i++) {
        if (i % 2) result[i] = result[i-1] + 1;
        else result[i] = result[i/2];
    }

    return result;
}