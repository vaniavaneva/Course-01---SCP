#include <iostream>

int main()
{
    int n, negItems = 0;
    float nums[100];
    float sum = 0;
    scanf_s("%d", &n);
    if (n <= 100) {
        for (int i = 0; i < n; i++) {
            scanf_s("%f", &nums[i]);
            if (int(nums[i]) < 0) {
                sum += nums[i];
                negItems++;
            }
        }
        printf("%f", sum/negItems);
    }
}