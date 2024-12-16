#include <iostream>

float Square(int);
float Rectangle(int, int);
float Parallelogram(int, int);
float Trapezoid(int, int, int);
float Circle(int);

int main()
{
    int choice, a, b, c;
    printf("\nMenu:\n");
    printf("1. Square\n");
    printf("2. Rectangle\n");
    printf("3. Parallelogram\n");
    printf("4. Trapezoid\n");
    printf("5. Circle\n");
    printf("6. Exit\n");
    printf("Enter your choice: \n");
    scanf_s("%d", &choice);
    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            printf("a: ");
            scanf_s("%d", &a);
            printf("Area = %f", Square(a));
            printf("\n");
            break;
        case 2:
            printf("a: ");
            scanf_s("%d", &a);
            printf("b: ");
            scanf_s("%d", &b);
            printf("Area = %f", Rectangle(a, b));
            printf("\n");
            break;
        case 3:
            printf("a: ");
            scanf_s("%d", &a);
            printf("h: ");
            scanf_s("%d", &b);
            printf("Area = %f", Parallelogram(a, b));
            printf("\n");
            break;
        case 4: {
            printf("a: ");
            scanf_s("%d", &a);
            printf("b: ");
            scanf_s("%d", &b);
            printf("h: ");
            scanf_s("%d", &c);
            printf("Area = %f", Trapezoid(a, b, c));
            printf("\n");
            break;
        }
        case 5: {
            printf("r: ");
            scanf_s("%d", &a);
            printf("Area = %f", Circle(a));
            printf("\n");
            break;
        }
        case 6: {
            printf("Exiting program.\n");
            break;
        }
        default:
            printf("Invalid choice. Please try again.\n");
        }
        scanf_s("%d", &choice);
    }
    return 0;
}

float Square(int a) {
    return a * a;
}

float Rectangle(int a, int b) {
    return a * b;
}

float Parallelogram(int a, int h) {
    return a * h;
}

float Trapezoid(int a, int b, int h) {
    return (a + b) * h * 0.5;
}

float Circle(int r) {
    return r * r * 3.14159;
}