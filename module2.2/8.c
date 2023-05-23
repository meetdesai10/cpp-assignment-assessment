// WAP to print table up to given numbers 

#include<stdio.h>
int main()
{

    int i,number; // declaration of variable
    printf("enter the numebr whose table do you want => "); //take table numebr from user
    scanf("%d",&number);

    for(i=1;i<=10;i++) //using forloop for printf 1to10 numbers 
    {
        printf("%d x %d = %d\n",number,i,number*i); // print table 
    }
    return 0;
}