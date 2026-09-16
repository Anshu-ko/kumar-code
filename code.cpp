#include <iostream>
using namespace std;

 typedef struct employee
{

  int eId;
  char favChar;
  float salary;
}ep;

int main(){
  ep  anshu;
  anshu.eId =1;
  anshu.favChar = 'c';
  anshu.salary = 100000;

  cout<<"tha value is "<<anshu.eId<<endl;
  cout<<"tha value is "<<anshu.favChar<<endl;
  cout<<"tha value is "<<anshu.salary<<endl;
  return 0;

}




