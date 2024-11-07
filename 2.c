//wap to diaplay all the function in c 
#include<stdio.h>
#include<stdlib.h>
int main() {
  system("clear");
    int x;
    float b;
    double c;
    char ch;
    printf("Enter the first number = ");
    scanf("%c",&ch);
     printf("Enter the second number = ");
     scanf("%d",&x);
     printf("Enter the third number = ");
     scanf("%f",&b);
     printf("Enter the fourth number = ");
     scanf("%lf",&c);
     
     printf(" y = %d", x);
     printf(" \nz = %f",b);
     printf(" \na = %lf", c);
     printf("\nb =  %c", ch);
     return 0;
}