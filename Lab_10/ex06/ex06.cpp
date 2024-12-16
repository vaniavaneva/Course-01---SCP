#include <iostream>
#include <math.h>

int Plus(int, int);
int Minus(int, int);
int Multi(int, int);
float Division(int, int);
int ThirdPow(int);
void ScanArray(int*);
void PrintArray(int*);

int main() {
    int a, b;
    int Array[4];
    int choice;

    printf("A: ");
    scanf_s("%d", &a);
    printf("B: ");
    scanf_s("%d", &b);
    printf("Enter elements in array:\n");
    ScanArray(Array);
    printf("\nMenu:\n");
    printf("1. A + B\n");
    printf("2. A - B\n");
    printf("3. A * B\n");
    printf("4. A / B\n");
    printf("5. A^3\n");
    printf("6. Print Array\n");
    printf("7. Exit\n");
    printf("Enter your choice: \n");

    while (true) {
        scanf_s("%d", &choice);

        if (choice == 7) {
            printf("Exiting program.\n");
            break;
        }

        switch (choice) {
        case 1:
            printf("A + B = %d\n", Plus(a, b));
            break;
        case 2:
            printf("A - B = %d\n", Minus(a, b));
            break;
        case 3:
            printf("A * B = %d\n", Multi(a, b));
            break;
        case 4:
            printf("A / B = %.2f\n", Division(a, b));
            break;
        case 5:
            printf("A^3 = %d\n", ThirdPow(a));
            break;
        case 6:
            printf("Elements in array: ");
            PrintArray(Array);
            printf("\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

void ScanArray(int* Array) {
    for (int i = 0; i < 4; i++) {
        scanf_s("%d", &Array[i]);
    }
}

int Plus(int a, int b) {
    return a + b;
}

int Minus(int a, int b) {
    return a - b;
}

int Multi(int a, int b) {
    return a * b;
}

float Division(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0.0;
    }
    return (float)a / b;
}

int ThirdPow(int a) {
    return (int)pow(a, 3);
}

void PrintArray(int* Array) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", Array[i]);
    }
}