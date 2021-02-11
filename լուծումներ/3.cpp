#include <stdio.h>
#include <iostream>
using namespace std;

void printOddNumProduct(int a, int b) {
    int startingNumber = a;
    int tempNumber = a;
    int endingNumber = b;
    int product = 1;
    for(tempNumber; tempNumber <= endingNumber; tempNumber++) {
        if (tempNumber % 2 != 0) {
            product*=tempNumber;
        }
    }
    cout<<"Product of the odd numbers from "<<startingNumber<<" to "<<endingNumber<<" is "<<product;
};

int main()
{
    printOddNumProduct(5, 10);

    return 0;
}
