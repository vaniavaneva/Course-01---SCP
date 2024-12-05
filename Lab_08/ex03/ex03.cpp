#include <iostream>

int main()
{
    int array[10];
    int *pointer = array;
    int index;
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", (pointer + i));
    }
    int largest = *pointer;
    for (int i = 1; i < 10; i++) {
        if (*(pointer + i) > largest) {
            largest = *(pointer + i);
            index = i;
        }
    }
    printf("\nLargest element in array: %d at index [%d]", largest, index);

    int smallest = *pointer;
    for (int i = 9; i > 0; i--) {
        if (*(pointer + i) < largest) {
            largest = *(pointer + i);
            index = i;
        }
    }
    printf("\nSmallest element in array: %d at index [%d]", largest, index);
}