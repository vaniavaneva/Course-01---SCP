#include <iostream>

int MaxSaplings(int, int, int);

int main() {
    int m, n, a;
    printf("(M): ");
    scanf_s("%d", &m);
    printf("(N): ");
    scanf_s("%d", &n);
    printf("(A): ");
    scanf_s("%d", &a);
    int maxSaplings = MaxSaplings(m, n, a);
    printf("Max saplings: %d\n", maxSaplings);
    return 0;
}

int MaxSaplings(int m, int n, int a) {
    int treesInRow = m / a;
    int treesInColumn = n / a;
    return treesInRow * treesInColumn;
}