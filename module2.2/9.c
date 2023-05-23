// WAP to print factorial of given number

#include<stdio.h>
int main()
{

    int i,number,factorial=1; // declaration of variables
    printf("enter the number => "); //taek value from user 
    scanf("%d",&number);

    for(i=1;i<=number;i++) 
    {
        factorial*=i; //formula to fund factorial 
    }printf("factorial = %d",factorial); // printf factorial numebr of given value
    return 0;
} 