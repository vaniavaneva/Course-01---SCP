#include <iostream>
#include <bitset>

int main()
{
    int y = (10 ^ 12) ^ 12; // (1010 ^ 1100) ^ 1100
    int z = (21 & 4) & 5;   // (10101 & 100) & 101
    int c = (9 | 9) | 5;    // (1001 | 1001) | 0101
    int a = (3 | 12) & 6;   // (0011 | 1100) & 0110
    std::cout << y << " (Binary: " << std::bitset<4>(y) << ")" << std::endl;
    std::cout << z << " (Binary: " << std::bitset<5>(z) << ")" << std::endl;
    std::cout << c << " (Binary: " << std::bitset<4>(c) << ")" << std::endl;
    std::cout << a << " (Binary: " << std::bitset<4>(a) << ")" << std::endl;
}