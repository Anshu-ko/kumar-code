#include <iostream>
using namespace std;

//this is tha example arry base ..
class school
{
  int studentNo[300];
  int classNo [50];
  int counter;

public :
   void initcounter (void) {counter = 0;}
   void setClass (void);
   void displayClass(void);




};

void school :: setClass (void) {
  cout<<"enter tha numbe of student"<< counter +1 <<endl;
  cin>>studentNo[counter];
  cout<<"enter tha class"<<endl;
  cin>> classNo[counter];
  counter++;
}

void school :: displayClass (void) {
  for (int i = 0; i < counter; i++) {
    cout<<"number of syudent "<<studentNo[i]<<"is"<<classNo[i]<<endl;
  }
}

int main(){
  school bright;
  bright.initcounter();
  bright.setClass();
  bright.setClass();
  bright.setClass();
  bright.displayClass();
  return 0;
}
