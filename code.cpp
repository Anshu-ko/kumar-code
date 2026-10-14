#include <iostream>

using namespace std;

class base1
{
public:
    void greet(){
        cout<<"how are you"<<endl;
    }

};

class base2
{
public:
    void greet(){
        cout<<"kaise ho"<<endl;
    }

};

class derived :  public base1, public base2{
    int a;
public :
    void greet(){
        base2 : greet();

    }
};

class B
{
public:
    void say(){
        cout<<"hello world: "<<endl;
    }
};

class D :  public B{
    int a ;

public:
   void  say(){
    cout<<"hellow my dear friend "<<endl;
   }

};

int main(){
   /*base1 anshu;
    base2 anshu2;
    anshu.greet();
    anshu2.greet();

    derived d;
    d.greet(); */
   
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
