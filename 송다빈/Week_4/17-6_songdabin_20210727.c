int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize){
    int i = 0, j = 0;
    int cnt[1001] = {0,};
    
    for (i = 0; i < arr1Size; i++) cnt[arr1[i]]++;
    
    for (i = 0, j = 0; i < arr2Size; i++) {
        while(cnt[arr2[i]]) {
            arr1[j++] = arr2[i];
            cnt[arr2[i]]--;
        }
    }
    
    for (i = 1; i <= 1000; i++) {
        while(cnt[i]) {
            arr1[j++] = i;
            cnt[i]--;
        }
    }
    
    *returnSize=arr1Size;
    
    return arr1;
}