#include <iostream>
using namespace std;

class Employee{
    public:
    string name ="Debjit";
    int salary = 10000;

    void printDetails(){
        cout<<"Name: "<< this->name <<endl;
        cout<<"Salary: "<< this->salary<<endl;
    }};


int main(){
    Employee deb;
    
    cout<<"the name of our first employee is "<<deb.name<<" and his salary is "<<deb.salary<<endl;
    deb.printDetails();
}