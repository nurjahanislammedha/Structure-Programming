/*Write a C program to determine whether a number is negative or not*/
#include<stdio.h>
int main()
{
    float n; //n=number

    printf("Enter number = ");
    scanf("%f",&n);

    if(n<0){
        printf("The number is negative");
    }else{
        printf("The number is not negative");
    }

    return 0;
}
