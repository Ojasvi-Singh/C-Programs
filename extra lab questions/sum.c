#include <stdio.h>

int main() {
    int number, sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum of the digits is: %d\n", sum);
    return 0;
}
