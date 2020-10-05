// Implementation of heap sort
#include<iostream>

using namespace std;

void maxHeapify(int* a, int i, int n)
{
    int largest = i;
    int leftChild = 2*i + 1;
    int rightChild = 2*i + 2;
    if(leftChild < n && a[leftChild] > a[largest])
        largest = leftChild;
    if(rightChild < n && a[rightChild] > a[largest])
        largest = rightChild;
    if(largest != i)
    {
        swap(a[i], a[largest]);
        maxHeapify(a, largest, n);
    }
}

void heapSort(int* a, int n)
{
    // creating max heap
    for(int i = (n-2)/2; i >= 0; i--)
        maxHeapify(a, i, n);
    for(int i = n - 1; i > 0; i--)
    {
        swap(a[0], a[i]);
        maxHeapify(a, 0, i);
    }
}

void display(int* a, int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Before Heap sort: ";
    display(arr, n);
    heapSort(arr, n);
    cout << "After Heap Sort: ";
    display(arr, n);

    return 0;
}
