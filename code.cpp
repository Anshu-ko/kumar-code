#include <iostream>

using namespace std;

class c2;

class c1 
{
    int val1;

    friend  void exchange(c1&, c2&);


public :
    void inData(int a){
        val1 = a;
    }

    void display(void){
        cout<< val1 << endl;
    }

};

class c2
{
    int val2;
    friend void exchange(c1&, c2&);      
public: 
    void inData(int a ){
        val2 = a;
    }

    void display(void){
        cout<< val2 <<endl;
    }
};
//trick to swap by two number a and b 
//temp = a
// a = b
// b = temp
//using call by reference
void exchange(c1&x , c2&y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main(){
    c1 oc1;
    oc1 inData(45);
    
    c2 oc2;
    oc2 inData(87);

    exchange(oc1 ,oc2);

    cout<<"tha value  c1 after exchanging: ";
    oc1.display();
    cout<"tha value of c2 after exchanging ";
    oc2.display();

    return 0;
    
}
