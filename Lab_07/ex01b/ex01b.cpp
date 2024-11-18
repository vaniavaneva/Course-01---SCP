#include <iostream>
#include <stdlib.h> // for rand()
#define RAND_MAX 100.0

int main()
{
    float random[50];
    int length = sizeof(random) / sizeof(random[0]);
    for (int i = 0; i < length; i++) {
        random[i] = rand() / (float(RAND_MAX) + 1);
        printf("random[%d] = %f\n", i, random[i]);
    }
}
