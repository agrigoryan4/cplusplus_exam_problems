#include <stdio.h>
#include <iostream>
using namespace std;

class A {
    private:
    double a; double b; double c;
    public:
    void Set_XYZ(double x, double y, double z) {
        a = x; b = y; c = z;
    };
    double Get_XYZ(void) {
        double max = a;
        if(c > b && b > a) {
            max = c;
        } else if(b > a) {
            max = b;
        }
        return max;
    };
};

int main()
{
    A obj1;
    A obj2;
    obj1.Set_XYZ(4.3, 8.4, 1.0);
    obj2.Set_XYZ(3.7, 4.5, 9.99);
    
    cout<<"obj1 max: "<<obj1.Get_XYZ()<<endl;
    cout<<"obj2 max: "<<obj2.Get_XYZ()<<endl;
    
    return 0;
}
