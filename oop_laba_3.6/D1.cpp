#include "D1.h"

D1::D1(int d = 0, int b1 = 0, int b2 = 0)
	:B1(b1), B2(b2)
{
	d1 = d;
}

void D1::showD1()
{
	cout << "Class D1" << endl;
	showB1();
	showB2();
	cout << "showD1()" << endl;
	cout << "D::d1 = " << d1 << endl;
}