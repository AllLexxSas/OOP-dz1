#include "my_stack.h"

My_Stack::My_Stack()
{
    reset();
}

My_Stack::~My_Stack()
{
    delete[]  stack;
}
//сброс стека
void My_Stack::reset()
{
    //std::fill_n(stack,size_stack,NULL);
    delete [] stack;
    stack = new int[size_stack];
    size =0;
}


//добавление значения в стек
bool My_Stack::push(int val)
{
    if(size < size_stack)
    {
        stack[size++] = val;
        return true;
    } else
    {
        std::cout << "the stack is full\n";

        return false;
    }
}

//вывод значения из стека
bool My_Stack::pop(){
    if(size >= 0){
            stack[(--size)] = NULL;
            return true;
    }
    else{
        std::cout << "stack is empty\n";
        return false;
    }
}

void My_Stack::print()
{
    std::cout << std::endl << "( ";
    for( int i = 0 ; i < size ; i++){
        std::cout << std::to_string(stack[i]) << " ";
    }
    std::cout << ")" << std::endl;


}
