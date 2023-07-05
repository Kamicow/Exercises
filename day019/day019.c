#include <stdio.h>

int main() {
    float divider = 1;
    int  number, digitInt = 0, digitFloat = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0)
        number *= -1;

    while(1) {
        if (number / divider <= 1) {
            printf("Before the dot, there are %d digit(s) \n", digitInt);
            break;
        }
        digitInt += 1;
        divider *= 10;
    }

    while(1) {
        if (number % 1 == 0) {
            printf("After the dot, there are %d digit(s) \n", digitFloat);
            break;
        }
        number *= 10;
        digitFloat += 1;

    }
}