//find max number
#include <stdio.h>
main() {
    int number, maxDigit = -1;
    printf("number: ");
    scanf("%d", &number);
    int tempNumber = number;
    while (tempNumber != 0) {
        int digit = tempNumber % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        tempNumber /= 10;
    }
    printf("Max: %d\n", maxDigit);
}

