#include <iostream>
using namespace std;

int main()
{
    int a =3, b= 4;

    //arithmetic operation
    cout<<"Tha value of a+b: "<<a+b<< endl;
    cout<<"Tha value of a-b: "<<a-b<< endl;
    cout<<"Tha value of a*b: "<<a*b<< endl;
    cout<<"Tha value of a/b: "<<a/b<< endl;
    cout<<"Tha value of a%b: "<<a%b<< endl;
    cout<<"Tha value of a++: "<<a++<< endl;
    cout<<"Tha value of a--: "<<a--<< endl;
    cout<<"Tha value of --a: "<<--a<< endl;
    cout<<"Tha value of ++a: "<<++a<< endl;
    
    // comparisin operation

    cout<<"following are tha comparising operators in c++"<<endl;
    cout<<"Tha valu of a==b :"<<(a==b)<<endl;
    cout<<"Tha valu of a!=b"<<(a!=b)<<endl;
    cout<<"Tha valu of a>=b"<<(a>=b)<<endl;
    cout<<"Tha valu of a<=b"<<(a<=b)<<endl;
    cout<<"Tha valu of a<b"<<(a<b)<<endl;
    cout<<"Tha valu of a>b"<<(a>b)<<endl;

    //logical operation
    cout<<"following are logical operators in cpp"<<endl;
    cout<<"tha value of logical and operators ((a==b)&&(a<b))"<<((a==b)&&(a<b))<<endl;
    cout<<"tha value of logical or operators ((a==b)||(a<b))"<<((a==b)||(a<b))<<endl;
    cout<<"tha value of logical notoperators (!(a==b))is :"<<(!(a<b))<<endl;



    return 0;
}