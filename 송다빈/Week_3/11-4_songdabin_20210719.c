#define SWAP(a,b)  {int t; t = a; a = b; b = t;}
 
void sort(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                SWAP(nums[i], nums[j]);
            }
        }
    }
}
int largestPerimeter(int* nums, int numsSize) {
    int peri = 0;

    sort(nums, numsSize);

    for (int i = 0; i < numsSize - 2; i++) {
        if ((nums[i]<(nums[i+1]+nums[i+2])) && (nums[i+1]<(nums[i]+nums[i+2])) && (nums[i+2]<(nums[i+1]+nums[i]))) {
            if (peri < nums[i] + nums[i+1] + nums[i+2]) peri = nums[i] + nums[i+1] + nums[i+2];
        }
    }

    return peri;
}