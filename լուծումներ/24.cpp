#include <stdio.h>
#include <iostream>
using namespace std;

class A {
    private:
    int x; int y;
    public:
    A() {
       x = 1; y = 1; 
    }
    A(int a, int b) {
        x = a; y = b;
    };
    void printProduct() {
      cout<<x*y<<endl;  
    };
};

int main()
{
    A obj;
    obj.printProduct();

    return 0;
}
