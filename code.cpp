#include <iostream>
using namespace std;

class simple
{ 
    int data1;
    int data2;

public:
    simple(int a , int b=10){
        data1 = a;
        data2 = b;
    }

    void printData(){
        cout<<"'enter tha data1 and data 2  is "<<data1<<" and "<<data2<<endl;
    }

};


//
Constructors With Default Arguments

int main(){
    simple c(1);
    
    c.printData();

    return 0;
}