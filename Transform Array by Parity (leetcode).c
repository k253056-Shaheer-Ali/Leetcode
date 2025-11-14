#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void transformByParity(int* nums, int size) {

    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    qsort(nums, size, sizeof(int), compare);
}

int main() {
    int nums[] = {4,3,2,1};
    int size = sizeof(nums) / sizeof(nums[0]);

    transformByParity(nums, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

