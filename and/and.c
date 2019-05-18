#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    unsigned char optionOne = 1; // 0000 0001
    unsigned char everyOptionsActivated = 255; // 1111 1111 => all options activated
    unsigned char optionTwoThreeActivated = 6; // 0000 0110

    if(everyOptionsActivated & optionOne) // everyOption contains optionOne thus it wont return 0
        printf("everyOptions contains optionOne\n");
    else
        printf("everyOptions doesn't contain optionOne\n");

    if(optionTwoThreeActivated & optionOne) // optionTwoThree doesn't contain optionOne
        printf("optionTwoThree contains optionOne\n");
    else
        printf("optionTwoThree doesn't contain optionOne\n");

    return 0;
}
