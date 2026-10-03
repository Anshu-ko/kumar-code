#include <iostream>
using namespace std;

class complex
{
    int a, b,c;

public:
    complex(int x, int y=88, int z=0){
        a = x;
        b = y;
        c = z;
    }

    void PrintData(){
        cout<<"enter tha value of x and y and z  "<<a<<" ,"<<b<<" and "<<c<<endl;
    }


};
//
Constructors With Default Arguments
int main(){
    complex c(1);
    //c.complex(1,2);
    c.PrintData();

    return 0;
}