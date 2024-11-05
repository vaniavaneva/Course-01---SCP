#include <iostream>

int main()
{
    int n, num, smallest;
    scanf_s("%d", &n);

    if (n > 0) {
        scanf_s("%d", &num);
        smallest = num;

        for (int i = 1; i < n; i++) { 
            scanf_s("%d", &num);

            if (num < smallest) {
                smallest = num; 
            }
        }
        printf("%d", smallest);
    }
    else {
        printf("n > 0.");
    }
}