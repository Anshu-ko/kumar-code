#include <iostream>

using namespace std;

class student
{
protected:
    int roll_no ;
public:
    void setroll_no( int r){
        roll_no = r;
    }

    void getroll_no(){
        cout<<"your rollnumber "<<endl;
    }

};

class exam : virtual public student{
protected:
    float maths ;
    float science;
public:
    void setmarks(float m1, float m2){

        maths = m1;
        science = m2;

    }
    void getmarks(void){
        cout<<"your result is " <<endl << "maths "<<maths<<endl<<"scienc "<<endl;   
    }


};

class sport : virtual student 
{
protected:
   int pt ;
public:
   void setscore(int r){
    pt = r;
   }

   void getdata(void){
    cout<<"print score "<<pt<<endl;

   }

};

class result : public sport , public exam {
private:
    float final;
public:
    void display(void){
        final = maths + science + pt;

        getroll_no();
        getmarks();
        getdata();
    }

};

int main(){
    result anshu;
    anshu.setroll_no(24);
    anshu.setmarks(334,334);
    anshu.setscore(444);
    anshu.display();

    return 0;
    
}