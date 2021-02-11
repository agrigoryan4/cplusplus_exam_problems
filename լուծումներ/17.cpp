#include <stdio.h>
#include <iostream>
using namespace std;


void printMaxDiagonalElement (int arrayOfNumbers[3][3]) {
    int maximumElement = 0;
    for(int i = 0; i < 3; i++) {
    	if(arrayOfNumbers[i][i] > maximumElement) {
    		maximumElement = arrayOfNumbers[i][i];
    	}
    }
    cout<<maximumElement<<" is the maximum diagonal element of the square matrix"<<endl;
    
}

int main()
{
    int numbers[3][3] = {{4, 11, 7}, {22, 21, 6}, {33, 2, 7}};
    printMaxDiagonalElement(numbers);
    return 0;
}
