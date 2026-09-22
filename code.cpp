#include <iostream>
using namespace std;




int sum (int a, int b){
  int c = a + b;
  return c;
}

void swapPointer (int    *a,  *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main (){
  int a=4, b=5;
  cout<<"tha value of a is "<<a<<"and tha value of b is "<<b<<endl;
  swapPointer (& a,& b);
  cout<<"tha value of a ia "<<a<<"and tha valul  of b"<<b<<endl;
  return 0;
}




