#include <iostream>

using namespace std;
int main() {

  //  what is pointer ? date type which hold tha address of other data typee
  int a = 3; 
  int *b = &a;
  cout<<"tha address of a is"<<&a;
  cout<<"tha address of a is "<<b;

  cout<<"tha address of b is "<<*b;

  // pointer to pointer 
  int**c = &b;
  cout<<"tha address of b is "<<&b<<endl;
  

  return 0;
}

