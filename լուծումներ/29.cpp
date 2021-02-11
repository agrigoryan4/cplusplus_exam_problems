#include <stdio.h>
#include <iostream>
using namespace std;

class A {
	public:
	A() {
		cout<<"A class-i constructory ashxatec"<<endl;
	};
	~A() {
		cout<<"A class-i destructory ashxatec"<<endl;
	};
};

class B : public A {
	public:
	B() {
		cout<<"B class-i constructory ashxatec"<<endl;
	};
	~B() {
		cout<<"B class-i destructory ashxatec"<<endl;
	};
};

int main()
{
    B object1;
    
	/*
	Ardyunq:
	A class-i constructory ashxatec                                                                                    
	B class-i constructory ashxatec                                                                                    
	B class-i destructory ashxatec                                                                                     
	A class-i destructory ashxatec		
	
	erb steghcvum e voreve classi himqi vra object, vory jarangum e ayl class-ic,
	skzbic kanchvum e jarangvogh classi constructory, heto jarangogh classiny
	isk erb objecty aylevs anhrazhesht che tsragrum, ayd objecty ochnchacvum e 
	skzbic kanchelov ir destructory (pluzichy), aynuhetev ayn class-iny, voric jarangum e
	*/
    return 0;
}
