#include <stdio.h>
#include <iostream>
using namespace std;

void printEvenNumSum(int a, int b) {
    int startingNumber = a;
    int tempNumber = a;
    int endingNumber = b;
    int sum = 0;
    for(tempNumber; tempNumber <= endingNumber; tempNumber++) {
        if (tempNumber % 2 == 0) {
            sum+=tempNumber;
        }
    }
    cout<<"Sum of the even numbers from "<<startingNumber<<" to "<<endingNumber<<" is "<<sum;
};

int main()
{
    printEvenNumSum(5, 10);

    return 0;
}
