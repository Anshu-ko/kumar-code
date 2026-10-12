#include <iostream>
using namespace std;

class base
{
protected:
    int data1;

public:
    int data2;

};

class derived : protected base {

};

int main(){
    base tur;
    derived nur;
    // cout<<nur.a; // Will not work since a is protected in both base as 
    // well as derived 
    
    return 0;
}
