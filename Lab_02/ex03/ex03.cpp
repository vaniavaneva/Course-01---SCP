#include <iostream>
#include <stdio.h>
#include <bitset>

int main()
{
    int decimal1 = 125;
    int decimal2 = 115;
    int decimal3 = 245;
    int decimal4 = 875;
    int hex1 = 0x12A;
    int hex2 = 0xFF;
    int hex3 = 0xC54;
    int hex4 = 0xACBD;
    std::cout << decimal1 << " (10) -> " << std::bitset<8>(decimal1) << " (2)" << std::endl;
    std::cout << decimal2 << " (10) -> " << std::bitset<8>(decimal2) << " (2)" << std::endl;
    std::cout << decimal3 << " (10) -> " << std::bitset<8>(decimal3) << " (2)" << std::endl;
    std::cout << decimal4 << " (10) -> " << std::bitset<12>(decimal4) << " (2)" << std::endl;
    std::cout << std::hex;
    std::cout << hex1 << " (16) -> " << std::bitset<12>(hex1) << " (2)" << std::endl;
    std::cout << hex2 << " (16) -> " << std::bitset<8>(hex2) << " (2)" << std::endl;
    std::cout << hex3 << " (16) -> " << std::bitset<12>(hex3) << " (2)" << std::endl;
    std::cout << hex4 << " (16) -> " << std::bitset<16>(hex4) << " (2)" << std::endl;
    std::cout << std::dec;

}