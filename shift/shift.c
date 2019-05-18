#include <stdio.h>

int multiplyBy2Times(int number, int count) {
    return number << count;
}

int divideBy2Times(int number, int  count) {
    return number >> count;
}

int main(int argc, char const *argv[])
{
    int test = 1;
    test = multiplyBy2Times(test, 2);
    test = divideBy2Times(test, 2);
    printf("%d\n", test);
    return 0;
}
