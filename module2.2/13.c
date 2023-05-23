// Write a program make a summation of given number

#include<stdio.h>
int main()
{
    int sum=0,i,value,number[10]; // devlaration of the variable
    printf("enter the value that you want to write => "); // to take value  from user
    scanf("%d",&value);


    for(i=0;i<value;i++)
    {
        printf("enter the numberv => ");
        scanf("%d",&number[i]); // take number from user
    }
    for(i=0;i<value;i++)
    {
        printf("%d  ",number[i]); // printf numbers which is given by user
        sum+=number[i]; // formula for addition of numbers
    }printf("\nsummation of the numbers is => %d",sum);
    

 return 0;
}