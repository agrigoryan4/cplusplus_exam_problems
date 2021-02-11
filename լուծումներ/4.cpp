#include <stdio.h>
#include <iostream>
using namespace std;

void printMultiplesOf5(int a, int b) {
    int startingNumber = a;
    int tempNumber = a;
    int endingNumber = b;
    for(tempNumber; tempNumber <= endingNumber; tempNumber++) {
        if (tempNumber % 5 == 0) {
            cout<<tempNumber<<"\t";
        }
    }
};

int main()
{
    printMultiplesOf5(5, 25);

    return 0;
}
