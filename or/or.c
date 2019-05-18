#include <stdio.h>

unsigned char makeCarInUse(unsigned char *carInUse, unsigned char carNumber) {
    return *carInUse |= carNumber;
}

int main(int argc, char const *argv[])
{
    unsigned char carInUse = 0; // 0000 0000
    unsigned char carOne = 1;   // 0000 0001
    unsigned char carTwo = 2;   // 0000 0010
    unsigned char carThree = 4;   // 0000 0010

    makeCarInUse(&carInUse, carOne);
    // now carInUse = 0000 0001
    printf("%d\n", carInUse);
    makeCarInUse(&carInUse, carTwo);
    // now carInUse = 0000 0011
    printf("%d\n", carInUse);

    return 0;
}
