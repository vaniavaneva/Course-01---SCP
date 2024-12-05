#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_VALUE 299

// Function to fill an array with random numbers
void fillArray(int* array, int length) {
    for (int i = 0; i < length; i++) {
        array[i] = rand() % (MAX_VALUE + 1); // Random numbers from 0 to MAX_VALUE
        printf("%d ", array[i]);
    }
}

// Function to find common elements between two arrays
int findCommonElements(int* firstArray, int* secondArray, int length, int* thirdArray) {
    int thirdArrayIndex = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (firstArray[i] == secondArray[j]) {
                thirdArray[thirdArrayIndex] = firstArray[i];
                thirdArrayIndex++;
                break; // To avoid duplicates
            }
        }
    }
    return thirdArrayIndex;
}

// Function to print an array
void printArray(const char* title, int* array, int length) {
    printf("\n\n%s:\n", title);
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int length;

    // Input array length
    printf("Length of arrays: ");
    scanf_s("%d", &length);

    if (length <= 0 || length > MAX_VALUE) {
        printf("Invalid length. Please enter a value between 1 and %d.\n", MAX_VALUE);
        return 1;
    }

    // Declaring arrays
    int firstArray[MAX_VALUE], secondArray[MAX_VALUE], thirdArray[MAX_VALUE];

    // Seeding random number generator
    srand((unsigned int)time(NULL));

    // Fill first array
    printf("\nFirst Array Items: \n");
    fillArray(firstArray, length);

    // Fill second array
    printf("\n\nSecond Array Items: \n");
    fillArray(secondArray, length);

    // Find common elements
    int thirdArrayIndex = findCommonElements(firstArray, secondArray, length, thirdArray);

    // Print third array if it has elements
    if (thirdArrayIndex > 0) {
        printArray("Third Array", thirdArray, thirdArrayIndex);

        // Find largest element in third array
        int largest = thirdArray[0];
        int largestIndex = 0;
        for (int i = 1; i < thirdArrayIndex; i++) {
            if (thirdArray[i] > largest) {
                largest = thirdArray[i];
                largestIndex = i;
            }
        }

        printf("\n\nLargest element in Third Array: %d at index [%d]", largest, largestIndex);
    }
    else {
        printf("\n\nNo common elements found between Array 1 and 2.");
    }

    return 0;
}