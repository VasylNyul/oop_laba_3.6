#include "D4.h"

D4::D4(int a, int b, int c, int d, int e)
	: D2(b, c, d, e)
{
	d4 = a;
}

void D4::showD4()
{
	cout << "class D4:" << endl;
	showD2();
	cout << "showD4()" << endl
		<< "D4::d4 = " << d4 << endl << endl;
}