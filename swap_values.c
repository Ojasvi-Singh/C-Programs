#include <stdio.h>

int main(){
   int A,B,temp;
   printf("Enter A:");
   scanf("%d",&A);
   printf("Enter B:");
   scanf("%d",&B);
   temp=A;
   A=B;
   B=temp;
   printf("%d",A);
   printf("\n%d",B);
    return 0;
}
