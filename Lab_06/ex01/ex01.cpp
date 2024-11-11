#include <iostream>

int main()
{
    int nums[10];
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        scanf_s("%d", &nums[i]);
    }
    printf("Array in asc order: ");
    for (int i = 0; i < length; i++) {
        printf("%d", nums[i]);
    }
    printf("\n");
    printf("Array in desc order: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d", nums[i]);
    }
}