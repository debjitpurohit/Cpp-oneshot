#include <iostream>
using namespace std;

int sum (int,int);
int main(){
    int a,b;
    cout<<"enter your first number"<<endl;
    cin>>a;

    cout<<"enter your seccond number "<<endl;
    cin>>b;
    cout<<"THE SUM OF THE TWO NUMBER IS "<<sum(a,b);
// SUM OD ADD ANY thing can be used 
    return 0;
}
int sum (int a,int b){
    int c;
    c=a+b;
    return c;
}
