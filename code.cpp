#include <iostream>
using namespace std;

class shop 
{
  int itamId[100];
  int itamPrice[100];
  int counter;

public :
   void initCounter(void)  {counter = 0; }
   void setPrice(void);
   void displayPrice(void);


};

void shop :: setPrice (void){
  cout<<"enter tha id "<< counter + 1 <<endl;
  cin>> itamId[counter];
  cout<<"enter tha price of your itam"<<endl;
  cin>> itamPrice[counter];
  counter++;
}

void shop :: displayPrice(void){
  for (int i = 0;  i < counter; i ++ ){
    cout<<"tha prise of with id "<<itamId[i]<<"is"<<itamPrice[i]<<endl;
  }

}

int main ()
{

  shop  dukan ;
  dukan.initCounter();
  dukan.setPrice();
  dukan.setPrice();
  dukan.setPrice();
  dukan.displayPrice();

  return 0;
  
  
}
