#include <iostream>

int main()
{
    int n;
    float nums[50];
    float production = 1;
    scanf_s("%d", &n);
    if (n <= 50) {
        for (int i = 0; i < n; i++) {
            scanf_s("%f", &nums[i]);
            if (int(nums[i]) % 2 != 0) {
                production *= nums[i];
            }
        }
        printf("%f", production);
    }
}
