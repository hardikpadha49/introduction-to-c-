//wap to find the area of triangle
#include<stdio.h>
#include<stdlib.h>
int main () {
    system("clear");
    float area , l , b;
    printf("Enter the breath = ");
    scanf("%f",&b);
    printf("Enter the length = ");
    scanf("%f",&l);
    area = l*b*1/2;
    printf("area of triangle = %f",area);
    return 0 ;
}
