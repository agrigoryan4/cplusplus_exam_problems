#include <stdio.h>
#include <iostream>
using namespace std;


void printDiagonalSum (int arrayOfNumbers[3][3]) {
    int sum = 0;
    for(int i = 0; i < 3; i++) {
    	sum+=arrayOfNumbers[i][i];
    }
    cout<<sum<<" is the diagonal sum of the square matrix"<<endl;
    
}

int main()
{
    int numbers[3][3] = {{4, 11, 7}, {22, 21, 6}, {33, 2, 7}};
    printDiagonalSum(numbers);
    return 0;
}
