// Extract and pop the minimum element from the heap

#include<iostream>
#include<cmath>
#include<queue>

class MinHeap
{
    public:
        int* arr;
        int cap;
        int size;

        MinHeap(int cap)
        {
            this -> cap = cap;
            arr = new int[cap];
            size = 0;
        }
        int parentIndex(int);
        int leftChildIndex(int);
        int rightChildIndex(int);
        int extractMin();
        void insert(int);
        void heapify(int); 
        void display();
};

// Function to extract and remove the minimum element
int MinHeap::extractMin()
{   
    int i = 0;
    int min = arr[i];
    std::swap(arr[i], arr[size - 1]);
    size--;
    heapify(i);
    return min;
}

// Function to heapify the given index
void MinHeap::heapify(int i)
{
    int smallest = i;
    int lt = leftChildIndex(i), rt = rightChildIndex(i);

    if(lt && arr[lt] < arr[i])
        smallest = lt;
    if(rt && arr[rt] < arr[i])
        smallest = rt;
    if(smallest != i)
    {
        std::swap(arr[smallest], arr[i]);
        heapify(smallest);
    }
}

int MinHeap::parentIndex(int ci)
{
    if(ci == 0)
        return -1;
    return floor((ci-1)/2);
}

int MinHeap::leftChildIndex(int pi)
{
    int lt = (2*pi + 1);
    if(lt >= size) return 0;
    
    return lt;
}

int MinHeap::rightChildIndex(int pi)
{
    int rt = (2*pi + 2);
    if(rt >= size) return 0;

    return rt;
}


void MinHeap::insert(int x)
{
    if(size == cap)
    {
        std::cout << "Insertion  not possible\n";
        return;
    }
    size++;
    arr[size-1] = x;
    for(int i = size - 1; i != 0, arr[i] < arr[parentIndex(i)];)
    {
        std::swap(arr[i], arr[parentIndex(i)]);
        i = parentIndex(i);
    }
}

// Level order traversal of the minheap
void MinHeap::display()
{
    std::queue<int> q;
    q.push(0);
    while(q.empty() == false)
    {
        int i = q.front();
        q.pop();
        std::cout << arr[i] << " ";
        if(leftChildIndex(i) != 0) q.push(leftChildIndex(i));
        if(rightChildIndex(i) != 0) q.push(rightChildIndex(i));
    }
}

int main()
{
    MinHeap mh(10);
    mh.insert(40);
    mh.insert(20);
    mh.insert(35);
    mh.insert(25);
    mh.insert(80);
    mh.insert(70);
    mh.insert(60);

    mh.display();
    int m = mh.extractMin();
    std::cout << " Min : " << m << std::endl;
    mh.display();
    return 0;
}
