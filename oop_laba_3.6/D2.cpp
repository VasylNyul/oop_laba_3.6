#include "D2.h"

D2::D2(int a = 0, int b = 0, int c = 0, int d = 0)
	:D1(b, c, d)
{
	d2 = a;
}

void D2::showD2()
{
	cout << "class D2:" << endl;
	showD1();
	cout << "showD2()" << endl
		<< "D2::d2 = " << d2 << endl << endl;
}