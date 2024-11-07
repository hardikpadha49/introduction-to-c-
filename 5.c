//wap to find the arae of rectangle
#include<stdio.h>
#include<stdlib.h>
int main (){
    system("clear");
    float l, b , area;
    printf("Enter the length = ");
    scanf("%f",&l);
    printf("Enter the breath = ");
    scanf("%f",&b);
    area = l*b;
    printf("area of rectangle %f", area);
    return 0 ;
}