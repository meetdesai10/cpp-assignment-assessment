
/* WAP to make simple calculator (operation include Addition, Subtraction,
 Multiplication, Division, modulo)*/

#include<stdio.h>

int main()
{
    int num,num1,num2,total;
    printf("Press 1.addition\nPress 2.subsraction\nPress 3.multiplication\nPress 4.division\nPress 5.modulo\n");
    scanf("%d",&num);
    printf("enter the number 1 => \n ");
    scanf("%d",&num1);
    printf("enter the number 2 => \n");
    scanf("%d",&num2);
         
    switch (num)
    {
    case 1:
         
        total=num1+num2;
        printf("ans is: %d",total); 

        break;
    case 2:
         
        total=num1-num2;
        printf("ans is: %d",total); 

        break;
    case 3:
        
        total=num1*num2;
        printf("ans is: %d",total); 

        break;
    case 4:
        total=num1/num2;
        printf("ans is: %d",total); 

        break;
    case 5:


        total=num1%num2;
        printf("ans is: %d",total); 
        break;
    default :
    printf("you entered invalid number\n");   
     
    return 0;
    }
}
