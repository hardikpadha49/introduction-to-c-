//wap to find the area and perimeter of reactngle ,circle,square using swtich statement
#include<stdio.h>
#include<stdlib.h>
int main (){
    system("clear");
    int a, b,area1;
    float c , d,area2;
    printf("Enter 1 for area of circle ,2 for square ,3 for reactangle");
    scanf("%d",a);
    switch (a){
        case 1:
        printf("enter the value to find the area of circle = ");
        scanf("%f",&c);
        area2 = 3.14*c*c;
        printf("area of circle is = %f",area2);
        break;
        case 2:
        printf("enter the value to find the area of square ");
        scanf("%d",b);
        area1 = a*a;
        printf("area of square is = %d",area1);
        break;
        case 3 :
        printf("Enter the length and breath = ");
        scanf("%d%d",&a,&b);
        area1 = a*b;
        printf("area of rectangle is = %d",area1);
        break;
    }
}