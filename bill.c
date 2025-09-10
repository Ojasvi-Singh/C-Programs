#include <stdio.h>

int main() {
    float units,c1,c2,c3,c4,s1,s2,s3,s4,bill;
    c1=3.00;
    c2=5.00;
    c3=7.00;
    c4=10.00;
    s1=0;
    s2=100;
    s3=200;
    s4=300;
    printf("Enter number of units: ");
    scanf("%f",&units);
    
    if (units<=100)
    {
       bill=(units*c1+s1);
       printf("The electricity bill is %f",bill);
    }
    if (units>100 && units<=300)
    {
        bill=(units*c2+s2);
        printf("The electricity bill is %f",bill);
    }
    if (units>300 && units<=500)
    {
        bill=(units*c3+s3);
        printf("The electricity bill is %f",bill);
    }
    if (units>500)
    {
        bill=(units*c4+s4);
        printf("The electricity bill is %f",bill);
    }
    return 0;
}