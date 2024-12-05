#include <iostream>
#include <cmath>

double Distance(int, int, int, int);

int main()
{
    int n;
    printf("Enter the number of points in the broken line: ");
    scanf_s("%d", &n);
    int* x = new int[n];
    int* y = new int[n];
    for (int i = 0; i < n; i++) {
        printf("Enter coordinates of point %d (x%d y%d): ", i + 1, i + 1, i + 1);
        scanf_s("%d %d", &x[i], &y[i]);
    }
    double totalDistance = 0;
    for (int i = 1; i < n; i++) {
        totalDistance += Distance(x[i - 1], x[i], y[i - 1], y[i]);
    }
    printf("Total length of the broken line: %.2f\n", totalDistance);
    delete[] x;
    delete[] y;

    return 0;
}

double Distance(int x1, int x2, int y1, int y2) {
    double D = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return D;
}