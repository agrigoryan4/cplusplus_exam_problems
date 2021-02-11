#include <stdio.h>
#include <iostream>
using namespace std;

void printProductOfMultiplesOf11 (int * arrayOfNumbers) {
    int product = 1;
    for(int i = 0; i < 5; i++) {
    	int nthElement = arrayOfNumbers[i];
    	if(nthElement % 11 == 0) {
    	    product*=nthElement;
    	}
    }
    cout<<product<<" is the product of multiples of 11"<<endl;
    
}

int main()
{
    int numbers[5] = {4, 11, 22, 21, 33};
    printProductOfMultiplesOf11(numbers);

    return 0;
}
