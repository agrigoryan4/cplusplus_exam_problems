#include <stdio.h>
#include <iostream>
using namespace std;

void printSumOf (int * arrayOfNumbers) {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
    	sum+= arrayOfNumbers[i];
    }
    cout<<sum<<" is the sum of the elements of the array"<<endl;
    
}

int main()
{
    int numbers[5] = {4, 12, 14, 21, 36};
    printSumOf(numbers);

    return 0;
}
