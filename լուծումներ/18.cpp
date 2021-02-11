#include <stdio.h>
#include <iostream>
using namespace std;

void getInAscendingOrder (int arrayOfNumbers[], int n) {
	int newArray[n];
	for(int index = 0; index < n; index++) {
	    newArray[index] = arrayOfNumbers[index];
	}
	
    for(int i = 0; i < n-1; i++) {
        int s = i;
        for(int j = i+1; j < n; j++) {
        	if(newArray[j] < newArray[s]) {
        		s = j;
        	}
        }
        
        int temp = newArray[i];
        newArray[i] = newArray[s];
        newArray[s] = temp;
    }
    
    
    for(int v = 0; v < n; v++) {
    	cout<<newArray[v]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int numbers[] = {4, 7, 14, 21, 33, 4, 13, 47, 101, 2};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    getInAscendingOrder(numbers, n);

    return 0;
}
