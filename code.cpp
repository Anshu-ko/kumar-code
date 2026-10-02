#include <iostream>

using namespace std;

class point {
    int x , y;
    public:
    point (int a, int b){
        x = a;
        y = b;
    }

    void displayPoint(){
        cout<<"tha number ("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    point p(3,4);
    p.displayPoint();

    point q(3,7);
    q.displayPoint();

    return 0;
}