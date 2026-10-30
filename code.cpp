#include <iostream>

using namespace std;
template<class T1,class T2 , class T3>
class myclass{
    public:
    T1 data1;
    T2  data2;
    T3  data3;
    myclass(T1 a, T2 b ,T3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl<<this->data3;
        
    }
};
int main(){
    myclass <int , float, char > deepak(3  , 3.3 , 'd');
    deepak.display();
    return 0;


}


 
