#include <stdio.h>
#include <iostream>
using namespace std;

void printEvenNumbersFromAnInterval(int a, int b) {
    int startingNumber = a;
    int endingNumber = b;
    for(startingNumber; startingNumber <= endingNumber; startingNumber++) {
        if (startingNumber % 2 == 0) {
            std::cout << startingNumber << "\t";
        }
    }
};

int main()
{
    printEvenNumbersFromAnInterval(5, 25);

    return 0;
}
