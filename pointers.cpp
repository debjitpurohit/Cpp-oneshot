#include <iostream>
using namespace std;

int main(){
    int a=34;
    int *ptr;
    ptr = &a; // ptr er moddhe a er adress ta dhukche
    
    cout<<"the adress of a is " <<ptr << endl;
    cout<<"the value of a is " <<*ptr << endl;
    cout <<"the  value of a is "<<*(ptr)<<endl;
    cout <<"the  value of a is "<<a<<endl;
    cout <<"the  adress of a is "<< &(a) <<endl;
    cout <<"the  adress of a is "<< &a <<endl;




}