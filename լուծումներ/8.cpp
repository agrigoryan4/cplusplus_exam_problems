#include <stdio.h>
#include <iostream>
using namespace std;

void printOddNumbers (int * arrayOfNumbers) {
    for(int i = 0; i < 10; i++) {
        if(arrayOfNumbers[i] % 2 != 0) {
            cout<<arrayOfNumbers[i]<<"\t";
        }
    }
}

int main()
{
    int numbers[10] = {4, 7, 14, 21, 33, 4, 13, 47, 101, 2};
    printOddNumbers(numbers);

    return 0;
}
