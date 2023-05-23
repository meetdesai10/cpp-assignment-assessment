//  to find max value from array

#include<stdio.h>
int main()
{
    int i,max,value,number[20]; //declaration of variables
    printf("how many number do you want to enter =>"); //taken value from user
    scanf("%d",&value); // to store value in variable
    for(i=0;i<value;i++)
    {
        printf("enter the number => ");
        scanf("%d",&number[i]);
    }
    max=number[0];
    for(i=0;i<value;i++)
    {
        if(number[i]>max)
        {
            max=number[i];
        }
        
    }
    printf("\nthe maximum value is => %d",max);

    return 0;
}