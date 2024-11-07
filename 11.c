//wap to add , multiple ,subtraction,remainder of given number 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () {
    system("clear");
    int a , b , multiplication , addition ,subtraction,remainder;
    printf("Enter the first number = ");
    scanf("%i",&a);
    printf("Enter the second number = ");
    scanf("%i",&b);
    addition = a+b ;
    subtraction = a-b;
    multiplication = a*b;
    remainder = a%b;
    printf("Addition = %i\n",addition);
    printf("subtraction = %i\n",subtraction);
    printf("multiplication = %i\n",multiplication);
    printf("remainder = %i\n",remainder);
    return 0 ;

}