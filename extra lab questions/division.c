#include <stdio.h>

int main() {
    int num1, num2;
    float result;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    result = (float)num1 / num2;
    printf("Output: %.1f\n", result);

    return 0;
}
