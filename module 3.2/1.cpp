// simple calculator using class
#include<iostream>
using namespace std;
class calculator{ //create class 
    public:
    int addition(int a,int b){  //function of addtion
        return a+b;
    }
    int substraction(int a,int b){ //function of substraction
        return a-b;
    }
    int multiplication(int a, int b){ //function of multiplication
        return a*b;
    }
    int division(int a,int b){ //function of division
        return a/b;
    }
};
int main()
{
    double num1,num2,total;  //declaration of variables
    char operation;
    cout<<"enter the frist number => "<<endl;  //take values from user
    cin>>num1;
    cout<<"enter the second number => "<<endl;
    cin>>num2;
    operation:
    cout<<"Enter the operation (+,-,/,*)"<<endl;
    cin>>operation;
    calculator calculator2; // give name to the class for calling in main function
    switch(operation) //declaration of switch case
    {
        case '+':
        total=calculator2.addition(num1,num2); //addition function call
        cout<<"total is => "<<total;
        break;
        case '-':
        total=calculator2.substraction(num1,num2); //substraction function call
        cout<<"total is => "<<total;
        break;
        case '*':
        total=calculator2.multiplication(num1,num2); // multiplication funcation call
        cout<<"total is => "<<total;
        break;
        case '/':
        total=calculator2.division(num1,num2);// division fucntion call
        cout<<"total is => "<<total;
        break;
        default:
        cout<<"please enter valid operation"<<endl;
        goto operation; //if user enter invalid operation then they will again redirect on selection of operation
    }

    return 0;
}