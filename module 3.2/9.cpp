// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class matrix //declar class
{
    private:
    int a[5],b[5],c[5]; //declar arrays to store value from user
    public:
    void inputdata() //declare function
    {
        cout<<"Enter 5 elements to store in Matrix A: "<<endl;
        for(int i=0;i<5;i++)//take value from user 
        {
            cin>>a[i];
        }
        cout<<"Enter the elements to store in matrix b: "<<endl;
        for(int i=0;i<5;i++)//take value from user
        {
            cin>>b[i];
        }
    }
    void print();// function declare
    void operator+();// operatre funtion declare
};
void matrix::operator+()//define operator funtion
{
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];// addition of two matrix
    }
}
void matrix::print()
{   cout<<endl<<"-------------------------------------"<<endl;
    cout<<"The matrix A is : "; //print frist matrix value
    for(int i=0;i<5;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl<<"-------------------------------------"<<endl;
    cout<<"The matrix b is : ";//print frist matrix value
    for(int i=0;i<5;i++)
    {
        cout<<" "<<b[i];
    }
    cout<<endl<<"-------------------------------------"<<endl;
    cout<<"The addition of matrix a and b is : ";//print addtion  of two matrix
    for(int i=0;i<5;i++)
    {
        cout<<" "<<c[i];
    }
    cout<<endl<<"-------------------------------------"<<endl;
}
int main()
{
    matrix Matrix;// create object of the class
    Matrix.inputdata();//call funtion to take value from user
    +Matrix;//call operator +
    Matrix.print();//call function to print addtion of two matrix
    return 0;
}