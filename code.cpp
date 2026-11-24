#include <iostream>
using namespace std;

class complex
{
  int x, y;

public:
  complex(int, int);

  void printnumber()
  {
    cout << "enter tha number " << x << "+" << y << "i" << endl;
  }
};

complex::complex(int a, int b)
{
 x = a;// jab code sahi ho fir bhi gaber value mil rahi ho to  yaha  dhayan dena ...
  y = b;
}

int main()
{
  complex a(22, 44);
  a.printnumber();

  complex b(34, 111);
  b.printnumber();

  return 0;
}