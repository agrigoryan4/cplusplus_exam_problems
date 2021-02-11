#include <stdio.h>
#include <iostream>
using namespace std;

void printProductOfNumbers(int a, int b) {
    int tempNum = a; int endNum = b;
    int product = 1;
    for(tempNum; tempNum <= endNum; tempNum++) {
        product*=tempNum;
    }
    cout<<"product of numbers from "<<a<<" to "<<endNum<<" is "<<product;
}

int main()
{
    printProductOfNumbers(1,10);

    return 0;
}
