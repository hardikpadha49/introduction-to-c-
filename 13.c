//wap to find the area and perimeter of circle ,rectangle,square
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    int r, a , b , area , perimeter;
 //This section is for area and perimeter for circle
    printf("Enter the number for area and perimeter of circle = ");
    scanf("%i",&r);
    area = 3.14*r*r;
    perimeter = 2*3.14*r;
    printf("area of circle is = %i\n",area);
    printf("perimeter of circle is = %i\n\n", perimeter);
   
 //This section is for area and perimeter for rectangle
    printf("Enter the first number for area and perimeter of reactangle = ");
    scanf("%i",&a);
    printf("Enter the second number for area and perimeter of reactangle = ");
    scanf("%i",&b);
    area = a*b;
    perimeter = 2*(a+b);
    printf("area of rectangle = %i\n",area);
    printf("perimeter of rectangle is = %i\n\n",perimeter);
  
//This section is for area and perimeter for square
    printf("Enter the number for area and perimeter of square = ");
    scanf("%i",&a);
    area = a*a;
    perimeter = 4*a;
    printf("area of square is = %i\n",area);
    printf("perimeter of square is = %i",perimeter);
     
    return 0;
}