#include <iostream>
#include "power.h"
#include "rgba.h"
using namespace std;

int main()
{
    //задание 1
    Power(data);
    data.SetABValue(3.4, 5.543);
    std::cout<< data.Calculate() << std::endl;


    //задание 2

    RGBA(r1);
    r1.print();
    RGBA r2(44,55,22,67);
    r2.print();

    //Задание 3


    return 0;
}
