//wap to do the sum of number given by user
#include<stdio.h>
#include<stdlib.h>
int main () {
    system("clear");
   int n, sum = 0;
   printf("Enter the five digit number ");         
   scanf("%i",&n);
  sum += n%10;
  n= n/10;
  sum +=n%10;
  n = n/10;
  sum += n%10;
  n = n/10;
  sum += n%10;
  n = n/10;
sum += n%10;
  n = n/10;
  printf("%i",sum);
  return 0 ;
}