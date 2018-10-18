#include <iostream>
#include <cmath>

#define MAX 10000

void doit() {

	double x=0;
	for (int i=0;i<MAX;i++) 
		x+=sin(i);

}

void f() { 

	for (int i=0;i<1000;++i) 
		doit();
}

void g() {

	for (int i=0;i<5000;++i)
		doit();
}

int main(void) {

	double s=0;

	for(int i=0;i<1000*MAX;i++) 
		s+=sqrt(i);

	f();
	g();
	
	std::cout << "Done"<< std::endl;
	
	return 0;
}