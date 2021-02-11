#include <stdio.h>
#include <iostream>
using namespace std;

void printNumbers(int a, int b) {
    int startingNumber = a;
    int tempNumber = a;
    int endingNumber = b;
    for(tempNumber; tempNumber <= endingNumber; tempNumber++) {
        if (tempNumber % 3 == 2) {
            cout<<tempNumber<<"\t";
        }
    }
};

int main()
{
    //prints the numbers from the interval 10 to 100, that leave a remainder of 2 on division by 3
    printNumbers(10, 100);

    return 0;
}
