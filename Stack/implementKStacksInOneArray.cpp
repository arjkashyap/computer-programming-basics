// Implementing K stacks in one array

#include<iostream>


class Stack
{
    int size, k;
    int *arr;
    int *tops;
    Stack(int size, int k)
    {
        this -> size = size;
        this -> k = k;
        tops = new int[k];
        arr = new int[size];
        for(int i = 0; i < k; i++)
            tops[i] = -1;
    }
    void push(int, int);
    int pop(int);
    int top(int);

};

void Stack::push(int x, int s)
{
   int top = tops[s - 1];
   if(top + k <= size)
   {
        top += k;
        arr[top] = x;
        tops[s - 1] = top;
   }

}


int Stack::pop
{
    int top = tops[s-1];
    // underflow
    if(top < 0)
        return -1;
    int p = arr[top];
    top -= k;
    tops[s-1] = top;
    return p;
}

int main()
{
    return 0;
}

