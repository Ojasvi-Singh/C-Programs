#include <stdio.h>

int main(){
    float principal,time,rate,si;
    printf("Enter Principal Amount:");
    scanf("%f",&principal);
    printf("\nEnter time:");
    scanf("%f",&time);
    printf("\nEnter Rate:");
    scanf("%f",&rate);
    si=(principal*time*rate)/100;
    printf("%f",si);
    return 0;
}
