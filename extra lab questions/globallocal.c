#include <stdio.h>

int myVar = 10;

void myFunction() {
    int myVar = 20;
    printf("Inside the function, the value is: %d\n", myVar);
}

int main() {
    printf("Outside the function (before call), the value is: %d\n", myVar);
    myFunction();
    printf("Outside the function (after call), the value is: %d\n", myVar);

    return 0;
}
