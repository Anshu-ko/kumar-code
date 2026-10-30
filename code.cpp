#include <iostream>

using namespace std;
template<class T>

class vector
{
public:
    T *arry;
    int size;

    vector(int m)
    {
        size = m;
        arry = new T[size];
    }
    int dotPoduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d+= this->arry[i]*v.arry[i];
        }
        return d;
    }
};

int main()
{
    vector <float> v1(3);
    v1.arry[0] = 4;
    v1.arry[1] = 3;
    v1.arry[2] = 2;

    vector<float> v2(3);
    v2.arry[0]=1.3;
    v2.arry[1]=3.5;
    v2.arry[2]=4.5;

    float a = v1.dotPoduct(v2);
    cout<< a <<endl;
    return 0;

}

 
