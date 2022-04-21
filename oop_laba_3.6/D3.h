#pragma once
#include "D2.h"

class D3 :
    private D2
{
private:
    int d3;

public:

    D3(int, int, int, int, int);
    ~D3() {}

    void showD3();
};

