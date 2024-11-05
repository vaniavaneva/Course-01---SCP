#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int opit = 10, min = 1, max = 10, num;
    int randomNumber = min + rand() % (max - min + 1);
    printf("Random number from %d to %d\n", min, max);
    while (opit != 0 || num != randomNumber) {
        scanf_s("%d", &num);
        opit--;
        if (num == randomNumber) {
            printf("guessed right!");
            break;
        }
        else if (opit == 0) {
            printf("no more tries, random number was %d", randomNumber);
            break;
        }
        else {
            printf("you have %d tries left\n", opit);
        }
    }
    return 0;
}