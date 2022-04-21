#pragma once
#include <iostream>

using namespace std;

class B1
{
private:
	int b1;

public:

	B1();
	B1(int);
	~B1() { }

	int get_b1() const { return b1; }
	void showB1();
};

