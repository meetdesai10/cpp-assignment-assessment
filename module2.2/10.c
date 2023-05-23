// WAP to print Fibonacci series up to given numbers
#include<stdio.h> 
int main()
{
    int i,n;
    printf("enter the n(n>1)=>"); //take value from user
    scanf("%d",&n); // store value in variables
    int fib[n];
    fib[0]=0; // in fibonacci 0 is always 0
    fib[1]=1; // in fibonacci 1 is always 1
    printf("%d\n%d\n",fib[0],fib[1]);
    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2]; //formula to find fibonacci numbers
        printf("%d\t",fib[i]); // to print fibonacci numbers
        printf("\n");
    }

    return 0;
}