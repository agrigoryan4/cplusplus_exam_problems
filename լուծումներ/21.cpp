#include <stdio.h>
#include <iostream>
using namespace std;

class A {
    private:
    double x; double y; double z;
    public:
    void SET_XYZ(double a, double b, double c) {
        x = a; y = b; z = c;
    };
    double GET_XYZ() {
        return (x+y+z)/3;
    };
};

int main()
{
    A obj1;
    A obj2;
    obj1.SET_XYZ(3.1, 4.12, 7.3);
    cout<<obj1.GET_XYZ()<<endl;
    obj2.SET_XYZ(3.6, 40.1, 7.6);
    cout<<obj2.GET_XYZ()<<endl;
    
    return 0;
}
