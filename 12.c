//wap to find the greatest among two using ternary opertaor
#include<stdio.h>
#include<stdlib.h>
int main (){
    system("clear");
   int a,b;
   printf("Enter the two number = ");
   scanf("%i %i",&a,&b);
   (a>b)?(printf("%i is the largest number",a)):(printf("%i is the largest number",b));
   return 0;
}