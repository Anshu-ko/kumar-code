#include <iostream>

using namespace std;

class complex// constructor deceleratation
{
    int a , b ;
    public:
    complex(void);

    void printNumber(){
        cout <<"enter tha number"<< a <<" + "<< b <<" i "<<endl;
    }
};

complex :: complex(void) //This is a default constructor as it takes no parameters
{
    a = 10;
    b = 10;
} 

int main(){
    complex c;
    c.printNumber();
    return 0;
}