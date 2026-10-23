#include <iostream>

using namespace std;


class base
{
    
public:
int variable_base_class;
    virtual void display (){
        cout<<"displya variable base clasS: "<<variable_base_class<<endl;
        

    }


};

class derived : public base {
    
public:
    int variable_derived_class;
    
    void display (){
        cout<<"displya variable base clasS: "<<variable_base_class<<endl;
        cout<<"displya variable derived clasS: "<<variable_derived_class<<endl;

    }


};

int main(){
    base *base_class_pointer;
    base object_base ;
    derived object_derived;

    base_class_pointer =&object_derived ;// Pointing base class pointer to derived class

    
    base_class_pointer->display();

    
    
    return 0;
}





