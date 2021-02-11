#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N = 8;
	
  double sum = 0;
    for(int i=1; i<=N; i++) {
		double k = i;
		double kFact = 1;
		double dividend = 0;
		for(int j=1; j<=k; j++) {
			kFact *= j;
			dividend += 1.0 / (2*j + 1);
		}
		sum += (kFact+6)/dividend;
	}
	cout<<sum<<endl;

  return 0;
}