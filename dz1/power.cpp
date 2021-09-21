#include "power.h"

Power::Power()
{
    _a = 2;
    _b = 4;
}

void Power::SetABValue(float a, float b)
{
    _a = a;
    _b = b;
}

float Power::Calculate()
{
    return pow( _a, _b);
}
