#include <iostream>
using namespace std;

class animal 
{
  private :
      int a , b ,c ;
  public :
      int d, e;
      void setData (int a1 ,int b1 , int c1);
      void getData(){
        cout<<"en<eter age of a "<<a<<endl;
        cout<<"en<eter age of b "<<b<<endl;
        cout<<"en<eter age of c"<<c<<endl;
        cout<<"en<eter age of d "<<d<<endl;
        cout<<"en<eter age of e "<<e<<endl;
      }


};

void animal :: setData(int a1, int b1, int c1){
  a = a1;
  b = b1;
  c = c1;
  
}

int main(){
  animal lion;
  lion.e = 2;
  lion.d = 34;
  lion.setData(23,33,32);
  lion.getData();
  
  
  return 0;
}