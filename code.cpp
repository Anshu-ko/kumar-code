#include <iostream>

using namespace std;

class student 
{
protected:
    int rollNumber;

public:
    void setrollNumber(int);
    void getrollNumber();

};

void student ::setrollNumber(int r){
    rollNumber = r;


}

void student :: getrollNumber(){
    cout<<"tha roll number is  "<<rollNumber<<endl;

}

class exam : public student 
{
protected:
    float maths;
    float coding;
public:
    void setNumber(float , float);
    void getNumber();
};

void exam ::setNumber(float m1 , float m2){
    maths = m1;
    coding = m2;
}

void exam :: getNumber() {
    cout<<"enter tha number 1 "<<maths<<endl;
    cout<<"enter tha number 2 "<<coding<<endl;
}

class result : public exam
{
    float percentage;
public :
    
    void displayresult(){
        getrollNumber();
        getNumber();
        cout<<"maths number "<<endl;
        
        cin>>maths;
        cout<<"coding number "<<endl;
        cin>>coding;
        cout<<"your result is "<<(maths + coding)/2<<endl;

        
    }

    
    
};



int main() {
    result anshu;
    anshu.setrollNumber(433);
    anshu.setNumber(3,4);
    anshu.displayresult();

    return 0;
}