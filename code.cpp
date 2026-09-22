#include <iostream>
using namespace std;


inline int product (int a,int b){
 // static int c =0;//this executes only once 
 // c = c + 1 ;//next time this function is run ,tha value of c will be retained 

  return a*b;
}
float moneyReceived (int currentMoney,float factor =1.04){
  return currentMoney *factor;
}

int main (){
  int a,b;
 // cout<<"entre thha value of a and b"<<endl;
  // cin>>a>>b;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  //cout<<"product of a*b"<<product(a,b)<<endl;
  int money =10000;
  cout<<"if you have money"<<money<<"rs in your bank ,you will recive "<<moneyReceived(money,1.1)<<"rs after 1 years";
  
  return 0;
}