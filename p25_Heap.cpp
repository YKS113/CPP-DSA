/*
Heap data structure
A Heap is a -
i) Complete binary Tree with a
ii)heap order property

Complete Binary tree(CBT)- a Binary tree with all levels completely filled, but the last/leaf level may or may not be completely filled and if partially filled, it must be left leaning
Heap order property-
Min heap- for every node, all of its children have greater value than it.
Max heap- for every node, all of its children have lower value than it.

Goto-images\heap.jpg
*/
// Insertion in heap: add new el at end of array, check if its parent is smaller than it, if yes swap them, do this untill you reach root node
// We start our heap from 1st index because 0*2 will give 0
/*
#include <iostream>
using namespace std;
class Heap
{
public:
    int arr[100];
    int size = 0;

    void insert(int val)
    {
        int i = size + 1;
        arr[i] = val;
        while (i > 1)
        {
            int parent = i / 2;
            if (arr[parent] < arr[i])
            {
                swap(arr[parent], arr[i]);
            }
            i = i / 2;
        }
        size++;
    }

    void del()
    { // in priority queue, deletion means delete first el/root node
        if (size == 0)
        {
            cout << "Priority queue is empty\n";
            return;
        }
        swap(arr[1], arr[size]); // swap root with last el, del last el
        arr[size] = -1;
        size--;
        heapify(arr, size, 1);

    }
    void heapify(int arr[], int n, int i)//i is root/start of tree
    {
    int largest = i; // Initialize largest with root's index
    int l = 2 * i; // left = 2*i
    int r = 2 * i + 1; // right = 2*i + 1

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    Heap h1;
    h1.insert(60);
    h1.insert(56);
    h1.insert(40);
    h1.insert(30);
    h1.insert(20);
    h1.insert(55);
    h1.print();
    h1.insert(65);
    h1.print();
    // for insertion TC O(logn) as we're going to top of tree from bottom, i.e.height of tree
    h1.del(); // for deletion TC O(logn) as -//-
    h1.print();
}*/

// Heapify algorithm--converts an array into heap i.e. Building a Heap
#include <iostream>
using namespace std;
void heapify(int *arr, int size, int i) // i is root/start of tree
{
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;

    if (l <= size && arr[l] > arr[largest])
    {
        largest = l;
    }
    if (r <= size && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
}
void print(int *arr, int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"\n";
}
int main()
{
    int arr[6] = {-1, 55, 56, 52, 54, 57};
    // all leaf els are already a heap, els from n/2+1 to n are leaf els
    int n = 5;
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, 5, i);
    }
    print(arr, 5);

// TC O(n) actually-O(nlogn)- for every node(actually n/2 nodes only,so it's n/2*logn), we're traversing height logn, SC O(1)
/*
Time complexities-

1. Building a Heap:
Bottom-up Heapify: When building a heap from scratch using the bottom-up heapify approach, the time complexity is O(n). This is because we start at the lowest level and work our way up, performing heapify operations on each subtree with a height of at most log n (for a complete binary tree). While the number of subtrees is n, the individual heapify operations become faster towards the root, resulting in an overall linear complexity.
https://g.co/gemini/share/dc2733f17f8b

2. Maintaining Heap Property (Heapify Down):
Single Heapify Operation: In this scenario, where you only need to maintain the heap property after inserting or deleting an element, the time complexity is O(log n). This is because the heapify operation only needs to traverse down the tree, at most, to the height of the tree, which is logarithmic in the number of elements (n).*/

// P-1 Build Min Heap(from 0 indexed array)
//https://www.codingninjas.com/studio/problems/build-min-heap_1171167

//Heap sort (converting a heap into ascending order array)
    int i=n;
    while(i>0){
        swap(arr[1],arr[i]);//swap the root i.e.largest el to end
        heapify(arr,i-1,1);//hepify from root last el - 1
        i--;
    }
    //approach is somewhat similar to bubble sort, as largest el keep bubbling up at end of array
    print(arr,5);

}