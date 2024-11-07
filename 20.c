//wap to find if the alpabet is a vowel or consonant
#include<stdio.h>
#include<stdlib.h>
int main (){
    system("clear");
    char a;
    printf("Enter the alphabet = ");
    scanf("%c",&a);
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("alphabet is vowel");
    else 
    printf("alphatbet is consonant");
    return 0 ;
}