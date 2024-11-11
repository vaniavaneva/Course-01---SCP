#include <iostream>

int main()
{
    int nums[10], biggest, index;
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        scanf_s("%d", &nums[i]);
    }
    biggest = nums[0];
    for (int i = 0; i < length; i++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
            index = i;
        }
    }
    printf("Largest num: %d. Index: %d", biggest, index);
}