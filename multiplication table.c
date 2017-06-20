//Write a program to print the multiplication table of a given number
#include<stdio.h>
int main(){
    int num,i;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
        printf("%3d  *  %-3d  = %3d\n",num,i,i*num);
return 0;
}
