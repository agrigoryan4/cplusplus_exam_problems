#include <stdio.h>
#include <iostream>
using namespace std;

class Vector {
    private:
    int x; int y;
    public:
    void set_values(int a, int b) {
        x = a; y = b;
    };
    int get_product() {
        return x*y;
    };
};

int main()
{
    Vector vector1;
    vector1.set_values(4, 3);
    cout<<vector1.get_product()<<endl;

    return 0;
}
