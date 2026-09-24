#include <iostream>
using namespace std;

class employee
{     
      private :
          int a, b, c ;
      public :
          int d, e ;
          void setData (int a1 ,int b1, int c1);
          void getData(){
            cout<<"int tha value of a"<<a<<endl;
            cout<<"int tha value of b"<<b<<endl;
            cout<<"int tha value of c"<<c<<endl;
            cout<<"int tha value of d"<<d<<endl;
            cout<<"int tha value of e"<<e<<endl;
          }
};

void employee :: setData (int a1 ,int b1, int c1){
  a = a1;
  b = b1;
  c = c1;
}

int main(){
  employee anshu;
  anshu.d = 4;
  anshu.e = 49;
  anshu.setData(1,2,3);
  anshu.getData();

  return 0;
}