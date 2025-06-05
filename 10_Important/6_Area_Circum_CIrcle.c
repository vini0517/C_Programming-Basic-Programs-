//C Program to find the Area and Circumference of a Circle
//Area of Circle = π × r²
//Circumference of Circle = 2 × π × r
#include<stdio.h>
#define pi 3.14159

int main(){
    int r;
    float Area,Circum;
    printf("Enter Radius:");
    scanf("%d",&r);
    Area=pi*r*r;
    Circum=2*pi*r;
    printf("Area of Circle: %.2f\n",Area);
    printf("Circumference of circle: %.2f",Circum);
    
    return 0;
}