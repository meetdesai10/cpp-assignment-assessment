
//Write a program you have to make a summation of first and last Digit

#include<stdio.h>
int main()
{
    int i,value,number[50]; // declaration of variables
    printf("enter the value => "); // taken value from user
    scanf("%d",&value); // to stroe value in variables

    for(i=0;i<value;i++)
    {
        printf("enter the number => ");
        scanf("%d",&number[i]);
    }
    for(i=0;i<value;i++){ // to print number which is taken from user
        printf("%d\t",number[i]);
    }
    printf("\nfrist number is => %d\n",number[0]); // number[0]= print number 1 which enterd by user
    printf("\nlast numbr is => %d\n",number[value-1]); // number[valu   e-1]=array starts from 0 so i wrote "value -1"
    int total;
    total=number[0]+number[value-1]; //total of last and frist number
    printf("\ntotal of the frist number and last number is => %d\n",total);
    return 0;
}