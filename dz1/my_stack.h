#ifndef MY_STACK_H
#define MY_STACK_H

#include <cstdint>
#include <iostream>

//#define size_stack 10

class My_Stack
{
protected:
     int size_stack = 10;
public:
    My_Stack();
    ~My_Stack();
    void reset();
    bool push(int);
    bool pop();
    void print();


private:
    int *stack;
    std::size_t size;

};

#endif // MY_STACK_H
