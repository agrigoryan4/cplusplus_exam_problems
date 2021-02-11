// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned int n = 8;
    float value = 0.0;
    for (int i=1; i <= n; i++) {
        float product = 1.0;
        for (int j=1; j <= i; j++) {
            product *= sin(j);
        };
        value += product;
        cout<<"product "<<i<<": "<<product<<endl;
    }
    cout<<"result: "<<value<<endl;
    return 0;
}