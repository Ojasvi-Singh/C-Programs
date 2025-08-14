#include <stdio.h>

int main(){
   float length,breadth,perimeter,area;
   printf("Enter the length of the rectangle:");
   scanf("%f",&length);
   printf("Enter the breadth of the rectangle:");
   scanf("%f",&breadth);
   perimeter=(length+breadth)*2;
   area=(length*breadth);
   printf("The Perimeter of the rectangle is:");
   printf("%f",perimeter);
   printf("\nThe Area of the rectangle is:");
   printf("%f",area);
    return 0;
}
