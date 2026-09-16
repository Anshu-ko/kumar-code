#include <iostream>
using namespace std;

int main(){
  //arry example
  int mark [4] = {23,34,44,1,};
  int mathMarks [4];
  mathMarks [0]=122;
  mathMarks [1]=33;
  mathMarks [2]=43;
  mathMarks [3]=54;
  cout<<"only marks";

  cout<<mathMarks[0]<<endl;
  cout<<mathMarks[1]<<endl;
  cout<<mathMarks[2]<<endl;
  cout<<mathMarks[3]<<endl;
  cout<<"marks ";
  cout<<mark[0]<<endl;
  cout<<mark[1]<<endl;
   //you can change tha value of arry ;
  mark [2] = 4555;
  cout<<mark[2]<<endl;
  cout<<mark[3]<<endl;

  int* P = mark;
  cout<<"tha value of marks [0] is " <<*p<<endl;
  
 
  

  return 0;

  
}
