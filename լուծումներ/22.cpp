#include <stdio.h>
#include <iostream>
using namespace std;

class A {
    protected:
    int a = 1; int b = 2;
    public:
    A(){};
    A(int i, int j) {
        a = i; b = j;
    };
};

class B : public A {
    protected:
    int c = 3; int d = 4;
    public:
    B(){};
    B(int i, int j, int k, int l) : A(i, j) {
        c = k; d = l;
    };
    void getValuesAndMeanValue () {
        cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<" d: "<<d<<endl;
        cout<<"Mean value: "<<(a+b+c+d) / 4 <<endl;
    };
};

int main()
{
    B obj(6,7,4,3);
    obj.getValuesAndMeanValue();
    
    return 0;
}
