#include<iostream>
#include<cmath>
#include<climits>
#include<queue>

#define ll long long int
#define MAX_SIZE 100000

class MinHeap
{
    ll* arr;
    ll cap;
    ll size;

    public:
        MinHeap(ll cap)
        {
            this -> cap = cap;
            size = 0;
            arr = new ll[cap];
        }

    void insert(ll);
    void decreaseKey(ll, ll);
    void extractMin();
    void heapify(ll);
    void remove(ll);
    ll parentIndex(ll);
    ll leftChildIndex(ll);
    ll rightChildIndex(ll);
    ll getMin();
};

// Returns the parent of the index of the argument node
ll MinHeap::parentIndex(ll ci)
{
    if(ci == 0)
        return -1;
    ll pi = std::floor((ci - 1)/2);
    return pi;
}

ll MinHeap::leftChildIndex(ll pi)
{
    ll ci = (2*pi) + 1;
    if(ci >= size)
        return 0;
    return ci;
}

ll MinHeap::rightChildIndex(ll pi)
{
    ll ci = (2*pi) + 2;
    if(ci >= size)
        return 0;
    return ci;
}

// Insert element in the min heap
void MinHeap::insert(ll x)
{
    if(size >= cap)
        return;
    size++;
    arr[size - 1] = x;
    ll i = size-1;
    while(i != 0 && arr[i] < arr[parentIndex(i)])
    {
        std::swap(arr[i], arr[parentIndex(i)]);
        i = parentIndex(i);
    }
}

// Get minimum of all the lements in the heap
ll MinHeap::getMin()
{
    if(size == 0)
        return -1;
    return arr[0];
}

// delete element x from the heap
void MinHeap::remove(ll x)
{
    ll k = -1;
    ll inf = 1000000000;
    for(ll i = 0; i < size; i++)
    {
        if(arr[i] == x)
            k = i;
    }
    decreaseKey(k, inf);
}

void MinHeap::decreaseKey(ll i, ll x)
{
    arr[i] = x;
    while(i != 0 && arr[i] > arr[parentIndex(i)])
    {
        std::swap(arr[i], arr[parentIndex(i)]);
        i = parentIndex(i);
    }
    extractMin();
}

void MinHeap::extractMin()
{
    if(size == 0)
        return;
    if(size == 1)
    {
        size--;
        return;
    }
    std::swap(arr[0], arr[size-1]);
    size--;
    heapify(0);

}

void MinHeap::heapify(ll i)
{
    ll smallest = i;
    ll lt = leftChildIndex(i), rt = rightChildIndex(i);

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


int main()
{
    MinHeap mh(MAX_SIZE);
    ll n;
    std::cin >> n;
    while(n--)
    {
        ll q;
        std::cin >> q;
        switch(q)
        {
            case 1:
                ll v;
                std::cin >> v;
                mh.insert(v);
                break;

            case 2:
                ll d;
                std::cin >> d;
                mh.remove(d);
                break;

            case 3:
                std::cout << mh.getMin() << std::endl;
                break;
          
        } 

    }
    return 0;
}





