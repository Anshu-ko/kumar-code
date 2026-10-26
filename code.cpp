#include <iostream>
#include<string>

using namespace std;

class TG 
{
protected:
    string title;
    float rating;

public:
    TG(string s , float r){
        title = s;
        rating = r;

    }

    virtual void display(){}

};

class TGgreade: public TG{
    float perfomence;
public:
    public:
    TGgreade(string s , float r, float pr):TG(s,r){
        perfomence = pr;
    }

    void display (){
        cout <<"tital of tg "<<title<<endl;
        cout<<"rating of tg "<<rating<<"out of 5 start"<<endl;
        cout<<"perfomence of tg"<<perfomence<<endl;

    }

    

};

class TGmistake : public TG{
public:
    float mistake;

    TGmistake (string s, float r, float ms):TG(s,r){
        mistake = ms;
    }

    void display(){
        cout <<"title of tg of class "<<title<<endl;
        cout<<"rating of tg of class"<<rating<<endl;
        cout<<"mistake of tg of class "<<mistake<<endl;
    }

};

int main(){
    string title;
    float rating, perfomence;
    float mistake;

    title="bad manner ";
    rating = 4.4;
    perfomence = 4.9;

    TGgreade anshu(title, rating ,perfomence);

    title = "Django tutorial Text";
    mistake= 43.0;
    rating = 4.19;
    TGmistake anshu2(title, rating, mistake);

    TG* tuts[2];
    tuts[0] = &anshu;
    tuts[1] = &anshu2;

    tuts[0]->display();
    tuts[1]->display();

    return 0;




}