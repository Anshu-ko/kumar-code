#include <iostream>
using namespace std;

class complex
{
    int a , b ;
        public :
            void setNumber (int n1, int n2 ){
          
             a = n1;
             b = n2;
           }
            friend complex sumComplex(complex o1, complex o2, );  
           void getPrint(){
            cout <<"tha number "<<a<< " + " <<b<<" i "<<endl;
           }

};

complex sumComplex(comlex o1 , complex o2 ){
    Complex o3;
    
    o3.setNumber((o1.a +o2.a), (o1.b+o2b));
}

int main (){
    complex c1 ,c2;
    c1.setNumber(4, 5);
    c1.getPrint ();

    c2.setNumber (5 , 6);
    c2.getPrint();

    sum = sumNumber (c1,c2);
    sum.setNumber();

    return 0;
}