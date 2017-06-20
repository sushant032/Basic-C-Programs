//Write a program to compute the area of a circle and display it using a constant pi.
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    float r,area;
    printf("Enter the radius:");
    scanf("%f",&r);
    area=pi*pow(r,2);
    printf("The area of the circle is: %f",area);

}
