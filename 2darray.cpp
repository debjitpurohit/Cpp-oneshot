#include <iostream>
using namespace std; //2d array
int main(){
    int arr2d[3][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };  //2d array
    for (int i = 0; i < 3; i++){
         for(int j = 0; j < 3; j++){
        cout << "the value at "<<i<<" , "<<j<<" is "<<arr2d[i][j]<<endl;
      }
    }
    
    return 0;
}