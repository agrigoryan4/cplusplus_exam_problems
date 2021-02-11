#include <stdio.h>
#include <iostream>
using namespace std;


void printMinimumElementOf2dArray (int arrayOfNumbers[][2]) {
    int minimumElement = arrayOfNumbers[0][0];
    for(int i = 0; i < 2; i++) {
    	for(int j = 0; j < 5; j++ ) {
    		if(arrayOfNumbers[i][j] < minimumElement) {
    			minimumElement = arrayOfNumbers[i][j];
    		}
    	}
    }
    cout<<minimumElement<<" is the minimum element of the 2d array"<<endl;
    
}

int main()
{
    int numbers[5][2] = {{4, 11}, {22, 21}, {33, 2}, {3, 9}, {11, 7}};
    printMinimumElementOf2dArray(numbers);
    return 0;
}
