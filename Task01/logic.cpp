#include "logic.h"
void swap_variables(int& a, int& b, int& c) {
	int t = b;
	b = a;
	int  g = c;
	c = t;
	a = g;
	cout << "a = " << a << ", b = "
		<< b << ", c = " << c << endl;
}