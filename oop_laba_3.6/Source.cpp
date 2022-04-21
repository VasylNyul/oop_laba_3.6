#include <iostream>
#include "D3.h"
#include "D4.h"

int main()
{
    B1 o1(11);
    cout << "B1 o1(11)" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << "Hierarchy of class B1" << endl;
    o1.showB1();

    B2 o2(22);
    cout << "B2 o2(22)" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << "Hierarchy of class B2" << endl;
    o2.showB2();

    D1 o3(4, 5, 66);
    cout << "D1 o3(4, 5, 66)" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << "Hierarchy of class D1" << endl;
    o3.showD1();

    D2 o4(4, 5, 66, 77);
    cout << "D2 o4(4, 5, 66, 77)" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << "Hierarchy of class D2" << endl;
    o4.showD2();

    D3 o5(4, 5, 66, 77, 88);
    cout << "D3 o5(4, 5, 66, 77, 88)" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << "Hierarchy of class D3" << endl;
    o5.showD3();

    D4 o6(4, 5, 66, 77, 99);
    cout << "D4 o6(4, 5, 66, 77, 99)" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << "Hierarchy of class D4" << endl;
    o6.showD4();

    return 0;
}