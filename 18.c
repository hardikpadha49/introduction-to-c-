//wap to find the cube of given number
#include <stdio.h>
int main() {
    int num , cube ;
    printf("Enter the number : ");
    scanf("%d",&num);
    if (num>0)
    {
        cube = num *num *num;
        printf("Cube of %d is %d",num , cube );
    }

    return 0;
}