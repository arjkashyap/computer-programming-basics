// Implementing various methods of Heap Data Structure

#include<iostream>
#include<cmath>

class MinHeap
{
    public:
        int* arr;
        int capacity;
        int size;
        MinHeap(int c)
        {
            arr = new int[c];
            capacity = c;
            size = 0;
        }

        int parentIndex(int);
        int leftChildIndex(int);
        int rightChildIndex(int);
        void insert(int);
        void deleteElement(int);
        int root();
};

int MinHeap::parentIndex(int ci)
{
    if(ci == 0)
        return -1;
    return std::floor( (ci - 1)/2 );
}

int MinHeap::leftChildIndex(int pi)
{
    int index = (2*pi + 1);
    if(index >= size) return 0;

    return index;
}

int MinHeap::rightChildIndex(int pi)
{
    int index = (2*pi + 2);
    if(index >= size) return 0;

    return index;
}

void MinHeap::insert(int x)
{
    if(size == capacity)
        return;
    size++;
    arr[size-1] = 0;
    for(int i = size - 1; i != 0;){
        std::swap(arr[i], arr[parentIndex(i)]);
        i = parentIndex(i);
    }

}

void MinHeap::deleteElement(int x)
{
    
}

int main()
{
    return 0;
}


