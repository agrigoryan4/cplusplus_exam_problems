#include <stdio.h>
#include <iostream>
using namespace std;

class A {
	protected:
	int a; int b;
	public:
	A(int x, int y) {
		a = x; b = y;
	};
};

class B : public A {
	protected:
	int c;
	public:
	B(int x, int y, int z) : A(x, y) {
		c = z;
	};
	void printMaxAndMean (void) {
		int max = a;
		if (c > b && b > a) {
			max = c;
		} else if(b > a) {
			max = b;
		}
		int mean = (a + b + c)/3;
		cout<<"a: "<<a<<" b: "<<b<<" c: "<<c<<endl;
		cout<<"the max value is: "<<max<<endl;
		cout<<"the mean value is: "<<mean<<endl;
	}
};

class X : public B {
	public:
	X(int x, int y, int z) : B(x, y, z) {};
};

class Y : public B {
	public:
	Y(int x, int y, int z) : B(x, y, z) {};
};

int main()
{
	X object1(4, 17, 3);
	object1.printMaxAndMean();

    return 0;
}
