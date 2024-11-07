//wap to convert farenhit to celcius
#include<stdio.h>
#include<stdlib.h>
int main(){
    system("clear");
    float c , f;
    printf("Enter temperature in farenhit = ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("Temperature in celcius = %f",c);
    return 0 ;
}