#include <iostream>
using namespace std;

int fib (int n){
  if (n<2){
    return 1;
  }

  return fib (n-2) + fib(n-1);
}

int factorial (int n){
  if (n<=1) {
    return 1;
  }
  return n * factorial (n-1);
}



int main() {

  int a;
  cout<<"enter tha factorial number "<<endl;
  cin>>a;
  //cout <<"calculate tha factorial : "<<factorial(a)<<endl;
  cout<<"entre tha value fib  "<<fib(a)<<endl;
  return 0;
  
}


