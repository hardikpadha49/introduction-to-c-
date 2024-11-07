//wap to find the area of circle
#include<stdio.h>
#include<stdlib.h>
int main (){
    float r,area;
    printf("Enter the radius = ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area of circle = %f", area);
    return 0 ;
}