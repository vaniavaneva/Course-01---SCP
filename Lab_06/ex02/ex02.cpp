#include <iostream>

int main()
{
    float nums[10], sum = 0, mean = 0;
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        scanf_s("%f", &nums[i]);
        sum += nums[i];
    }
    mean = sum / 10;
    printf("Sum = %f \nArith. mean = %f", sum, mean);
}