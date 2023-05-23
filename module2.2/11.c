// WAP to print number in reverse order 

#include<stdio.h>
int main()
{
    // I used array operator
    int i,number[]={6,4,7,2,8}; // declaration of variables
    for(i=0;i<5;i++) // to print originals numbers
    {
        
        printf("%d ",number[i]);
    }
    printf("\n--- reverse---\n");
    for(i=5-1;i>=0;i--) // to reverse numbers 
    {
        printf("%d ",number[i]);
    }

    return 0;
}