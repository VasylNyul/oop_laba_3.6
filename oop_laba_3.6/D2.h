#pragma once
#include "D1.h"
class D2 :
    protected D1
{
private:
    int d2;

public:

    D2(int, int, int, int);

    void showD2();
};

