// Create a class person having members name and age. Derive a class student
// having member percentage. Derive another class teacher having member
// salary. Write necessary member function to initialize, read and write data.
// Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;
class person // declaration of base class
{
    public:
    int age;
    string name;
    void persondetails(){
        cout<<"enter your name => "<<endl;
        cin>>name;
        cout<<"enter you age => "<<endl;
        cin>>age;
    }
    void printpersondetails(){
        cout<<"your name is => "<<name<<endl;
        cout<<"your age is => "<<age<<endl;
    }
};
class student{ //declaration of derive class
    public:
    double percentage;
    void personpercentage(){
        cout<<"enterr your percentage => "<<endl;
        cin>>percentage;
    }
    void printpercentage(){
        cout<<"your percentage is => "<<percentage<<endl;
    }
};
class teacher :public person,public student{ //declaration of derive class
    public:
    int value;
    void salary(){
        cout<<"enter your salary => "<<endl;
        cin>>value;
    }
    void printsalary(){
    cout<<"your salary is => "<<value<<endl;

    }
};
int main()
{
    teacher Teacher;//give name to the class for calling funcation
    Teacher.persondetails();
    Teacher.personpercentage();
    Teacher.salary();
    Teacher.printpersondetails();
    Teacher.printpercentage();
    Teacher.printsalary();
    return 0;
}