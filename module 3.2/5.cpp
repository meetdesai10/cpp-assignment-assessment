// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)

#include<iostream>
using namespace std;
class cricketer{ //declaration of base class
    protected:
        string name; //declaratio of variables for write a name
        public:
        void cricketername(string name1){ //declare function 
            name=name1;
            cout<<"Name is => "<<name1<<endl; //print name
        }
};
class batsman: public cricketer{ //declaration of derived class and inheritate base class in derived class
    int totalruns,bestperformance;
    float averageruns;
    public:
    void information(int total, float average,int bestperformance1){ //function declare
        totalruns=total;
        bestperformance=bestperformance1;
        averageruns=average;
    }
    void printinformation(){ //printf function data
        cout<<"total runs => "<<totalruns<<endl;
        cout<<"everage runs => "<<averageruns<<endl;
        cout<<"best performance => "<<bestperformance<<endl;
    }

};
int main()
{
    batsman Batsman; //give name to the class
    Batsman.cricketername("mahendra singh dhoni"); //call function
    Batsman.information(17266,50.6,224);// call function
    Batsman.printinformation();// call function for print data
    return 0;
}