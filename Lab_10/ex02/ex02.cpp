#include <iostream>
#include <math.h>

void ScanArray(int*);
void PrintArray(int*);
void MaxElement(int*);
void MinElement(int*);
int SumElements(int*);
float ArithSum(int*);
double Deviation(int*);

int main() {
    int Array[4];
    int choice;

    printf("Enter elements:\n");
    ScanArray(Array);

    printf("\nMenu:\n");
    printf("1. Print Array\n");
    printf("2. Find Max Element\n");
    printf("3. Find Min Element\n");
    printf("4. Calculate Sum of Elements\n");
    printf("5. Calculate Arithmetic Mean\n");
    printf("6. Calculate Standard Deviation\n");
    printf("7. Exit\n");
    printf("Enter your choice: \n");
    scanf_s("%d", &choice);

    while (choice != 7)
    {
        switch (choice)
        {
        case 1:
            printf("Elements in array: ");
            PrintArray(Array);
            printf("\n");
            break;
        case 2:
            MaxElement(Array);
            break;
        case 3:
            MinElement(Array);
            break;
        case 4: {
            int sum = SumElements(Array);
            printf("Sum of elements in array: %d\n", sum);
            break;
        }
        case 5: {
            float arithSum = ArithSum(Array);
            printf("Arithmetic mean of elements in array: %.2f\n", arithSum);
            break;
        }
        case 6: {
            double deviation = Deviation(Array);
            printf("Standard deviation of elements in array: %.2lf\n", deviation);
            break;
        }
        case 7:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
        scanf_s("%d", &choice);
    }
    return 0;
}

void ScanArray(int* Array) {
    for (int i = 0; i < 4; i++) {
        scanf_s("%d", &Array[i]);
    }
    return;
}

void PrintArray(int* Array) {
    for (int i = 0; i < 4; i++) {
        printf("%d ", Array[i]);
    }
    return;
}

void MaxElement(int* Array) {
    int max = Array[0];
    int maxIndex = 0;
    for (int i = 1; i < 4; i++) {
        if (Array[i] > max) {
            max = Array[i];
            maxIndex = i;
        }
    }
    printf("Max element in Array: %d at index [%d]\n", max, maxIndex);
    return;
}

void MinElement(int* Array) {
    int min = Array[0];
    int minIndex = 0;
    for (int i = 1; i < 4; i++) {
        if (Array[i] < min) {
            min = Array[i];
            minIndex = i;
        }
    }
    printf("Min element in Array: %d at index [%d]\n", min, minIndex);
    return;
}

int SumElements(int* Array) {
    int Sum = 0;
    for (int i = 0; i < 4; i++) {
        Sum += Array[i];
    }
    return Sum;
}

float ArithSum(int* Array) {
    float sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += Array[i];
    }
    return sum / 4.0;
}

double Deviation(int* Array) {
    double sum = 0;
    double squareSum = 0;
    double dispersion;
    double deviation;

    for (int i = 0; i < 4; i++) {
        sum += Array[i];
    }
    sum /= 4.0;

    for (int i = 0; i < 4; i++) {
        squareSum += pow(Array[i] - sum, 2);
    }
    dispersion = squareSum / 4;
    deviation = sqrt(dispersion);
    return deviation;
}