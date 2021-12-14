#include <iostream>
using namespace std;

int main(){
    // int arr[]={1,3,6}; //[3] can be mention otherwise not required
// arry index = 0,1,2

    // cout<<arr[1];//arry index start with 0 1 2 3

    int marks[6];

    for (int i=0;i<6;i++){
        cout<<"enter the martrks of "<<i<<" th student"<<endl;
        cin>>marks[i];

    }
    for (int i = 0; i < 6; i++)
    {
        cout<<"marks of "<<i<<"th student is "<<marks[i]<<endl;
    }
    
    return 0;
}