#include <iostream>

using namespace std;

class complex 
{
    int a , b;
    public:
    complex(int ,int);
    void printNumber(){
        cout<<"tha number "<<a<<" + "<<b<<" i "<<endl;
    }
};
complex :: complex(int x , int y)//This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main(){
      // Implicit call
    complex a(23,3);
    a.printNumber();
       // Explicit call
    complex b =complex(3,44); //equal sign ko hatane per bhi code run kar rha hai
    b.printNumber();


    return 0;

}

