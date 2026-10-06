#include <iostream>
using namespace std;

class bankDeposite{
    int principal;
    int year;
    float intrestRate;
    float returnValue;

    public:
        bankDeposite(){};
        bankDeposite(int p,int y, float r );
        bankDeposite(int p, int y,int r );
        void show();
};

bankDeposite :: bankDeposite(int p, int y , float r){
    principal = p;
    year = y;
    intrestRate = r;
    returnValue = principal;
    for(int i = 0; i < y; i++){
        returnValue = returnValue *(1+intrestRate);

    }
}

bankDeposite :: bankDeposite(int p, int y, int r)
{
    principal = p;
    year = y;
    intrestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+intrestRate);
    }
}

void bankDeposite :: show(){
    cout<<"principal value "<<principal<<"return value after "<<year<<"year is"<<returnValue<<endl;
}

int main(){
    bankDeposite bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"enter tha value p y and r"<<endl;
    cin>>p>>y>>r;

    bd1 = bankDeposite(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposite(p, y, R);
    bd2.show();

    return 0;
}

