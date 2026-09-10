#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter tha age "<<endl;
    cin>>age;
    if(age>18){
        cout<<"you are  adult"<<endl;
    }else if(age==18){
        cout<<"you are adulting stage"<<endl;
    }else{
        cout<<"you are child"<<endl;
    }
    

    return 0;

}