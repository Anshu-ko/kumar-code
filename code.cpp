#include <iostream>

using namespace std;

class foodItam
{
    int id ;
    int price;
public:
    void setData (int a , int b){
        id = a;
        price = b;
    }

    void getData(){
        cout<<"enter tha id:"<<id<<endl;
        cout<<"enter tha price:"<<price<<endl;
    }

};

int main(){
    int size = 3;
    foodItam *ptr = new foodItam[size];
    foodItam *ptrTemp = ptr;

    int p , i;
    float q;
    
    for(i = 0; i < size; i++ ){
        cout<<"enter tha id and price: "<<i+1<<endl;
        cin>>p>>q;

        ptr->setData(p,q);
        *ptr++;

    }

    for(i = 0; i <size; i++){
        cout<<"itam number:"<<i+1<<endl;
        ptrTemp->getData();
        *ptrTemp++;

    }
    return 0;

}

