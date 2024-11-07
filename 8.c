//wap to exhange the number using two variable
#include<stdio.h>
#include<stdlib.h>
int main (){
    system("clear");
    float a,b;
    printf("Enter the first number to swap a = ");
    scanf("%f",&a);
    printf("Enter the second number to swap b = ");
    scanf("%f",&b);
    a = a-b;
    b = a+b;
    a = b-a;
    printf("a = %f\n",a);
    printf("b = %f",b);

    return 0 ;

}