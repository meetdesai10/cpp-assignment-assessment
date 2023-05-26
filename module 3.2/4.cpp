// Write a program of Addition, Subtraction, Division, Multiplication using
// constructor

#include<iostream>
using namespace std;
class calculator{ //declaration of class
    int num1,num2; // delcare variables in private
    public:
    calculator(int n1,int n2){ //constructor declaration
        num1=n2; //declare in publically
        num2=n2;
    }
    int addition(){ //addition function
        return num1+num2;
    }
    int substraction(){ //substraction function
        return num1-num2;
    }
    int multiplication(){ // multiplication function
        return num1*num2;
    }
    int division(){ //division function
        return num1/num2;
    }
};
int main()
{
    int num1,num2;
    cout<<"enter the frist number => "<<endl;
    cin>>num1;
    cout<<"enter the second number => "<<endl;
    cin>>num2;
    calculator calculator2(num1,num2);  //give name of the class fpr calling in main funtion
    cout<<"addition of the number is => "<<calculator2.addition()<<endl; //call addition funcation
    cout<<"substraction of the number is => "<<calculator2.substraction()<<endl;//call substract function
    cout<<"multiplication of the number is => "<<calculator2.multiplication()<<endl;// call multiplication function
    cout<<"division of the number is => "<<calculator2.division()<<endl;//call division function
    return 0;
}