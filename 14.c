//wap to find the total and percentage of five subject
#include<stdio.h>
#include<stdlib.h>
int main () {
    system("clear");
    int a ,b ,c ,d ,e, total, percentage;
    printf("Enter the marks of subjects = ");
    scanf("%i%i%i%i%i",&a ,&b,&c,&d,&e);
    total = a+b+c+d+e;
    printf("Total marks of the five subjects is = %i\n",total);
    percentage = (total/5);
    printf("percentage of the five subjects is = %i",percentage);
    return 0 ;
}