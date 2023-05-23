/*WAP to take 10 no. Input from user and find out …
How many Even numbers are there
How many odd numbers are there
Sum of even numbers
Sum of odd numbers*/


#include<stdio.h>
int main()
{

int i,number[10],sum=0,sum2=0; // declaration of variables
    for(i=0;i<10;i++) //for loop for take value from user
    {
        printf(" enter the number => ");
        scanf("%d",&number[i]); // to store value which is taken from user
    }
    for(i=0;i<10;i++) // to print  which is taken from user
    {
        printf("%d ",number[i]);
    }printf("\n");
    printf("---even number are---\n");
    for(i=0;i<10;i++)
    {
    if(number[i] % 2==0)  // if condition for print and sum of even even numbers
    {
        printf("%d ",number[i]);
        sum+=number[i]; // sum of all even numbers
    }
    }
    printf("\nsum of the even number is => %d",sum); // print total of the even numbers
    printf("\n");
    printf("---odd numbers are---\n");
    for(i=0;i<10;i++)
    {
    if (number[i] % 2 !=0) //  if condition for print and sum of even even numbers
    {
            
        printf("%d ",number[i]);
        sum2+=number[i]; // sum of all odd numbers
    
    }
    }
    printf("\nsum of the odd number is => %d",sum2); // print total of the odd numbers
    
    
    
    return 0;
}