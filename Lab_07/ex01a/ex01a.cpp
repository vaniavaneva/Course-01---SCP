#include <iostream>
#include <stdlib.h> // for rand()
#define RAND_MAX 100

int main()
{
    int nums[20];
    int length = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < length; i++) {
        nums[i] = rand() % (RAND_MAX + 1);
        printf("%d ", nums[i]);
    }
}