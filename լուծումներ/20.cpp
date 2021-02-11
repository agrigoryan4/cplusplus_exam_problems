#include <stdio.h>
#include <iostream>
using namespace std;

void SwapValues(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
};

int main()
{
    int a = 14; int b = 3;
    cout<<"before swap- a: "<<a<<" b: "<<b<<endl;
    SwapValues(&a, &b);
    cout<<"after swap- a: "<<a<<" b: "<<b<<endl;

    return 0;
}
