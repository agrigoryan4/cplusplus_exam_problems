#include <stdio.h>
#include <iostream>
using namespace std;

void printSumOf7xNumbers (int * arrayOfNumbers) {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        if(arrayOfNumbers[i] % 7 == 0) {
            sum+=arrayOfNumbers[i];
        }
    }
    cout<<sum;
}

int main()
{
    int numbers[5] = {4, 7, 14, 21, 33};
    printSumOf7xNumbers(numbers);

    return 0;
}
