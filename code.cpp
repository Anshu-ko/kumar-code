#include <iostream>

using namespace std;


class base
{
    
public:
int variable_base_class;
    void display (){
        cout<<"displya variable base clasS: "<<variable_base_class<<endl;
        

    }


};

class derived : public base {
    
public:
    int variable_derived_class;
    
    void display (){
        cout<<"displya variable base clasS: "<<variable_base_class<<endl;
        cout<<"displya variable base clasS: "<<variable_derived_class<<endl;

    }


};

int main(){
    base *base_class_pointer;
    base object_base;
    derived object_derived;

    base_class_pointer =&object_derived;// Pointing base class pointer to derived class

    base_class_pointer->variable_base_class = 32;
    base_class_pointer->display();
    // base_class_pointer->variable_derived_class= 134; // Will throw an error

    base_class_pointer->variable_base_class = 3400; 
    base_class_pointer->display();

    derived *derived_class_pointer;
    derived_class_pointer = &object_derived;
    derived_class_pointer->variable_base_class = 9448;
    derived_class_pointer->variable_derived_class = 98;
    derived_class_pointer->display();


}


