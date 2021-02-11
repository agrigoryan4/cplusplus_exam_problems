// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int getCubed(int num) {
    cout<<"type int"<<endl;
    int result = pow(num, 3);
    return result;
};
    
float getCubed(float num) {
    cout<<"type float"<<endl;
    float result = pow(num, 3.0);
    return result;
};
    
double getCubed(double num) {
    cout<<"type double"<<endl;
    double result = pow(num, 3.0);
    return result;
};

long getCubed(long num) {
    cout<<"type long"<<endl;
    long result = pow(num, 3);
    return result;
};
    
int main() {
    
    cout<<getCubed(14.3)<<endl;
    
    
    return 0;
}