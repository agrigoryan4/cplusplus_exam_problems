#include <stdio.h>
#include <iostream>
using namespace std;

void printPositiveNumbers (signed int * arrayOfNumbers) {
    for(int i = 0; i < 10; i++) {
        if(arrayOfNumbers[i] > 0) {
            cout<<arrayOfNumbers[i]<<"\t";
        }
    }
}

int main()
{
    signed int numbers[10] = {-4, 7, 14, -21, 33, 4, -13, 47, -101, 2};
    printPositiveNumbers(numbers);

    return 0;
}
