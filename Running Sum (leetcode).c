#include <stdio.h>

void runningSum(int* nums, int numsSize, int* result) {
    int total = 0;
    for (int i = 0; i < numsSize; i++) {
        total += nums[i];
        result[i] = total;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    int result[size];

    runningSum(nums, size, result);

    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

