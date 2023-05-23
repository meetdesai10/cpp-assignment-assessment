
// WAP to swap two numbers without using third variable

#include<stdio.h>
int main(){
 
    int a=10,b=20; // declaration of variables

    printf("before swapping the value of a is => %d\n",a);
    printf("before swapping the value of b is => %d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping the value of a is => %d\n",a);
    printf("after swapping the value of b is => %d\n",b);
    return 0;
}
