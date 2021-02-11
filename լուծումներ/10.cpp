#include <stdio.h>
#include <iostream>
using namespace std;

void printEvenMultiplesOf3 (int * arrayOfNumbers) {
    int quantity = 0;
    for(int i = 0; i < 10; i++) {
    	int nthElement = arrayOfNumbers[i];
        if((nthElement % 3 == 0) && (nthElement % 2 == 0)) {
            cout<<arrayOfNumbers[i]<<"\t";
            quantity++;
        }
        if(i == 9) {
            cout<<"\n";
        }
    }
    cout<<quantity<<" numbers in total, that are even and multiples of 3"<<endl;
    
}

int main()
{
    int numbers[10] = {4, 12, 14, 21, 36, 4, 24, 47, 101, 2};
    printEvenMultiplesOf3(numbers);

    return 0;
}
