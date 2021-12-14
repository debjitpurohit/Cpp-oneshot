#include <iostream>
using namespace std;


int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    switch (age)
    {
    case 12:
        cout<<"you are 12 years old";
        break;
    case 18:
        cout<<"you are 18"<<endl;
        break;
    default:
        cout<<"you are neighter 18 nor 12";
        break;
    }
    return 0;
}
