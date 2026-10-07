#include <iostream>

using namespace std;

int count = 0;

class num

{
public:
    num(){
        count++;
        cout<<"this is tha time when constructor is called object number "<<endl;
    }

    ~num(){
        count--;
        cout<<"this is tha time when distructor is called object number " <<endl;
    }
};


int main(){
    cout<<"we are inside our main function "<<endl;
    cout<<"creating first object n1  "<<endl;

    num n1;
    {
        cout<<" creating new block " <<endl;
        cout<<"creating more tow object "<<endl;
        num n2, n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main "<<endl;
    return 0;

}