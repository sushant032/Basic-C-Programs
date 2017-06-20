// Write a program that uses add and sub function to add two numbers and subtract two numbers
#include<stdio.h>
int add(int , int);
int main(){
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    add(a,b);
    sub(a,b);
    return 0;
}
int add(int a, int b){
        printf("\n%d + %d = %d",a,b,a+b);
}

int sub(int a, int b){
        printf("\n%d - %d = %d",a,b,a-b);
}
