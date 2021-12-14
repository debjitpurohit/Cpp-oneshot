#include <iostream>
using namespace std;


int main(){
    int age;
    cout<<"enter your age"<< endl;
    cin>>age;

    if (age>150 || age <1) //check from top to bottom is 1st condition is wrong then 2nd then 3rd or ward
    {         // || is for or
        cout<<"invalid age ";
    }

    else if (age>=18)      // because computer check the code from top to bottom so if u use 151 age ...jehetu ota 18 er thke boro tai ota you can vote print krbe but jdi 150 opore dei tbe ei prblm ta hbe nh

    {
        cout<<"you can vote";
    }
    
    
    else
    {
        cout<<"you can't vote";
    }
    return 0;
}
