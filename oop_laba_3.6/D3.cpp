#include "D3.h"

D3::D3(int q = 0, int w = 0, int e = 0, int r = 0, int t = 0)
	:D2(w, e, r, t)
{
	d3 = q;
}

void D3::showD3()
{
	cout << "class D3:" << endl;
	showD2();
	cout << "showD3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;

}