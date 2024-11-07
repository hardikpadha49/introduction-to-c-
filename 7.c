//wap to eaxhange the number using third variable
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    float a,b,z;
    printf("Enter the first number to swap a = ");
    scanf("%f",&a);
    printf("Enter the second number to swap b = ");
    scanf("%f",&b);
    z=a;
    a=b;
    b=z;
    printf("a = %f\n",a);
    printf("b = %f",b);

    return 0;
}