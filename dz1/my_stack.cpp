#include "my_stack.h"

My_Stack::My_Stack()
{
    reset();
}
//сброс стека
void My_Stack::reset()
{
    std::fill_n(stack,size_stack,0);
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
        size--;
        return false;
    }
}
//вывод значения из стека
int My_Stack::pop(){
    int temp;
    if(size >= 0)
            stack[(--size)] = 0;
    else{
        std::cout << "stack is full\n";
        temp = size;
    }
    return temp;
}

void My_Stack::print()
{
    std::cout << std::endl << "( ";
    for( int i = 0 ; i < size ; i++){
        std::cout << std::to_string(stack[i]) << " ";
    }
    std::cout << ")" << std::endl;


}
