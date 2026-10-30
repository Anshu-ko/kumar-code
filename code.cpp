#include <iostream>

using namespace std;
template<class T1= int,class T2= float , class T3= char>
class anshu{
public:
    T1 a;
    T2 b;
    T3 c;

    anshu(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;

    }

    void display(){
        cout<<"enter tha value a "<<a<<endl;
        cout<<"enter tha value b"<<b<<endl;
        cout<<"enter tha value c"<<c<<endl;
    }



};

int main(){
    anshu <> p(2, 3.3, 's');
    p.display();
    

    anshu <float , int ,char > q(2.3, 3, 's');
    q.display();
    return 0;
    
}



 
