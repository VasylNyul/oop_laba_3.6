#pragma once
#include "B1.h"
#include "B2.h"
class D1 :
    public B1, protected B2
{
private:
    int d1;

public:

    D1(int, int, int);
    ~D1() {}

    void showD1();
};

