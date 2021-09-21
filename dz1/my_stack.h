#ifndef MY_STACK_H
#define MY_STACK_H

#include <cstdint>
#include <iostream>

#define size_stack 10

class My_Stack
{
public:
    My_Stack();
    void reset();
    bool push(int);
    int pop();
    void print();


private:
    //int size_stack = 10;
    int stack[size_stack];
    std::size_t size;

};

#endif // MY_STACK_H
