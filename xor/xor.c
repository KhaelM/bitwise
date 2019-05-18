#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char optionsInUse = 193; // 1100 0001
    unsigned char optionToDeactivate = 128; // 1000 0000
    
    optionsInUse = optionsInUse ^ optionToDeactivate;

    return 0;
}
