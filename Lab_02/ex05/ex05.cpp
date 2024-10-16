#include <iostream>

int main()
{
    int dec, hex, oct;
    printf("Dec: ");
    scanf_s("%d", &dec);
    printf("Hex: ");
    scanf_s("%x", &hex);
    printf("Oct: ");
    scanf_s("%o", &oct);
    printf("%d in hex & oct -> %x , %o\n", dec, dec, dec);
    printf("%x in dec & oct -> %d , %o\n", hex, hex, hex);
    printf("%o in dec & hex -> %d , %x", oct, oct, oct);
}