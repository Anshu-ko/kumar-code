#include <iostream>

using namespace std;

int main(){
   /* int a = 3;
    int *prt= &a;

    cout<<"print tha value of a "<<a<<endl;*/
    int *arr = new int[3];
    
    arr[1] = 12;
    arr[2] = 23;
    arr[3] = 34;
    arr[4] = 67;

    delete[] arr;

    cout<<"print value of arry 1 "<<arr[1]<<endl;
    cout<<"print value of arry 2 "<<arr[2]<<endl;
    cout<<"print value of arry 3 "<<arr[3]<<endl;
    cout<<"print value of arry 4 "<<arr[4]<<endl;


    return 0;
}