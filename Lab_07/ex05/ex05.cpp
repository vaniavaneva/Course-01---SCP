#include <iostream>

int main()
{
    int n, index;
    float nums[100], biggest, smallest;
    scanf_s("%d", &n);
    if (n <= 100) {
        for (int i = 0; i < n; i++) {
            scanf_s("%f", &nums[i]);
        }
        biggest = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] > biggest) {
                index = i;
            }
        }
        smallest = nums[0];
        for (int i = 0; i < n; i++) {
            if (nums[i] < smallest) {
                smallest = nums[i];
            }
        }
        printf("Smallest element: %f\n", smallest);
        printf("Largest num index: %d", index);
    }
}