#include <iostream>
#include <cmath>
using namespace std;

int decimalIntToBinary () {
  int decimal;
  cout<<"Enter a decimal integer:\t";
  cin>>decimal;
  // calculating number of binary digits
	int quotient = decimal;
	int i=0;
	while(quotient >= 1) {
	    int newQuotient = quotient / 2;
	    quotient = newQuotient;
	    i++;
	}
	
	// getting binary digits array
	int binaryArray[i];
	quotient = decimal;
	int j = i-1;
	while(quotient >= 1) {
	    int newQuotient = quotient / 2;
	    binaryArray[j] = quotient % 2;
	    quotient = newQuotient;
	    j--;
	}
	
	cout<<"decimal: "<<"\t"<<decimal<<endl;
	cout<<"binary: "<<"\t";
	int n = sizeof(binaryArray)/sizeof(binaryArray[0]);
	for(int i=0; i<n; i++) {
	    cout<<binaryArray[i]<<"\t";
	}
	cout<<endl;
	
}

int main() {
    decimalIntToBinary();
    return 0;
}