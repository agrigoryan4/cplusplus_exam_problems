// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    cout<<"x"<<"  |  "<<"y"<<endl;
    cout<<"___|___"<<endl;
    for(float i = 8; i <= 13.7; i+=0.4) {
        float y = pow(i + pow(sin(i+1)+3, 1.0/2), 1.0/3);
        cout<<i<<"  |  ";
        cout<<y<<endl;
    }

    return 0;
}