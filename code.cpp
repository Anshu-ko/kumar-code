#include <iostream>

using namespace std;

class base1 
{ 
protected:
    int base1int;
public:
    void setbase1int(int a){
        base1int = a;
    }

};
class base2 
{ 
protected:
    int base2int;
public:
    void setbase2int(int a){
        base2int = a;
    }

};

class base3
{ 
protected:
    int base3int;
public:
    void setbase3int(int a){
        base3int = a;
    }


};

class result : public base1 , public base2, public base3
{
public:
    void show(){
        cout<<"show tha base 1 " <<base1int<<endl;
        cout<<"show tha base 2 " <<base2int<<endl;
        cout<<"show tha base 3 " <<base3int<<endl;
        cout<<"sum of base " <<base1int +base2int+base3int<<endl;
        
    }

};

int main(){
    result anshu;
    anshu.setbase1int(23);
    anshu.setbase2int(44);
    anshu.setbase3int(56);
    anshu.show();

    return 0;
}