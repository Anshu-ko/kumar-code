#include <iostream>

using namespace std;
class employee
{
    
    
public :
    int id;
    float salary;
    employee (int inpId){
        id = inpId;
        salary = 23.0;

    }
     employee(){};
};


class program : public employee {
    
public:
int leedcode ;
    program(int inpId){
        id = inpId;
        leedcode = 22;
    }

    void getData(){
        cout<<id<<endl;
    }

};

int main(){
    employee anshu(1);
    cout<<anshu.salary<<endl;

    program anshu2(2);
    cout<<anshu2.leedcode<<endl;

    cout<<anshu2.id<<endl;
    anshu2.getData();

    return 0;
}
