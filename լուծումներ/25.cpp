#include <stdio.h>
#include <iostream>
using namespace std;

class Vector {
    private:
    int x; int y;
    public:
    Vector() {
       x = 1; y = 1; 
    }
    Vector(int a, int b) {
        x = a; y = b;
    };
    Vector operator - (Vector operand) {
        Vector temp;
        temp.x = x - operand.x;
        temp.y = y - operand.y;
        return temp;
    };
    void printValues(void) {
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};

int main()
{
    Vector mek(14,3);
    Vector erku(9, 7);
    Vector ereq = mek - erku;
    
    ereq.printValues();
    return 0;
}
