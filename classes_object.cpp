#include <iostream>
using namespace std;

class Employee
{ // class name
public:
    string name = "DEBJIT";
    int salary = 100000;

    void display()
    {
        cout << "the name of our first employee is " << this->name << " and his salary is " << this->salary <<endl;
    }
    Employee(string name, int salary,int id)
    {
        this->name = name;
        this->salary = salary;
    }
    void printDetails()
    {
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }
private:
   int id; 
     
};
int main()
{
    // Employee deb; //object
    Employee sum("SUMIT", 200000,8125);
    Employee nila("NILANJANA", 300000,8215);
    // cout<<"the name of our first employee is "<<deb.name<<" and his salary is "<<deb.salary<<endl;
    // deb.printDetails();
    sum.printDetails();
    nila.printDetails();
    sum.display();
    nila.display();
    //cout<< nila.id ;// its a private variable so u cant accesss ...if u want to access this make a public variable and access it
}