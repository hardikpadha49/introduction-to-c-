//wap to find the Euclidean distance
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main () {
    system("clear");
    float x1,y1,x2,y2,distance;
    printf("Enter x-coordinate of the first point x1 : ");
    scanf("%f",&x1);
    printf("Enter y-coordinate of the first point y1 : ");
    scanf("%f",&y1);
    printf("Enter x-coordinate of the second point x2 : ");
    scanf("%f",&x2);
    printf("Enter y-coordinate of the second point y2 :");
    scanf("%f",&y2);
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The Euclidean distance is : %2f",distance);
    return 0 ;
}