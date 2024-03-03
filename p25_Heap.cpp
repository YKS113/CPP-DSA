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
    int l = 2 * i; // left = 2*i  👉for 0 indexed arr, l=2*i+1
    int r = 2 * i + 1; // right = 2*i + 1  👉for 0 indexed arr, r=2*i+2

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
#include <bits/stdc++.h>
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
    cout << "\n";
}
int main()
{
    int arr[6] = {-1, 55, 56, 52, 54, 57};
    // all leaf els are already a heap, els from n/2+1 to n are leaf els 👉for 0 indexed arr, els from n/2 to n-1(end) are leaf els
    int n = 5;
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, 5, i);
    }
    print(arr, 5);

    // TC O(n) actually-O(nlogn)- for every node(actually n/2 nodes only,so it's n/2*logn), we're traversing height logn
    /*
    Time complexities-

    1. Building a Heap:
    Bottom-up Heapify: When building a heap from scratch using the bottom-up heapify approach, the time complexity is O(n). This is because we start at the lowest level and work our way up, performing heapify operations on each subtree with a height of at most log n (for a complete binary tree). While the number of subtrees is n, the individual heapify operations become faster towards the root, resulting in an overall linear complexity.
    https://g.co/gemini/share/dc2733f17f8b
    ⭐The intuition is: Most of the nodes will be leaves nodes, which do not need to be heapified. The longest number of steps will be for the nodes higher up in the tree, but of these there are only a few. So half of the nodes can stay, of the rest half only need one step, of the rest half only need 3 steps, etc. Only the root node needs potentially log(n) steps and there is only one root.

    2. Maintaining Heap Property (Heapify Down):
    Single Heapify Operation: In this scenario, where you only need to maintain the heap property after inserting or deleting an element, the time complexity is O(log n). This is because the heapify operation only needs to traverse down the tree, at most, to the height of the tree, which is logarithmic in the number of elements (n).*/

    // P-1 Build Min Heap(from 0 indexed array)
    // https://www.codingninjas.com/studio/problems/build-min-heap_1171167

    // Heap sort (converting a heap into ascending order array)
    int i = n;
    while (i > 0)
    {
        swap(arr[1], arr[i]); // swap the root i.e.largest el to end
        i--;
        heapify(arr, i, 1); // hepify from root last el - 1
    }
    // approach is somewhat similar to bubble sort, as largest el keep bubbling up at end of array
    print(arr, 5);
    // TC O(nlogn) for every el, we're doing heapify

    // Using STL
    priority_queue<int> pq; // max-heap by default
    pq.push(1);
    pq.push(4);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    cout << "priority queue- max heap\n";
    cout << pq.top() << "\n";
    pq.pop();
    cout << pq.top() << "\n";
    cout << pq.size() << "\n";
    cout << pq.empty() << "\n";

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(4);
    pq2.push(5);
    pq2.push(2);
    pq2.push(6);
    cout << "priority queue- min heap\n";
    cout << pq2.top() << "\n";
    pq2.pop();
    cout << pq2.top() << "\n";
    cout << pq2.size() << "\n";
    cout << pq2.empty() << "\n";
}

// P-2 Kth smallest element
// https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1
// M-1 sort array, return arr[k-1] TC O(nlogn)
// Similarly to find kth largest, use max heap for M2 and min heap for M3
// LC-215
// LC-378. Kth Smallest Element in a Sorted Matrix

// P-3 Is Binary Tree Heap
// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1
// TC O(n) SC O(h)

// P-4 Merge two binary Max heaps
// https://www.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1
// TC O(m+n(for merging) + m+n(for building heap)) ~ O(m+n) SC O(m+n)

// P-5 Minimum Cost of ropes
// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
// TC O(n (for building heap) + nlog (for deleting every top)) ~ O(nlogn)

// P-6 Convert BST to Min Heap
// https://www.geeksforgeeks.org/convert-bst-min-heap/
// First get the inorder array from BST, them populate the els in Preorder
// TC O(n) SC O(n+h)~ O(n)
// P-7 BST to max heap
// https://www.geeksforgeeks.org/problems/bst-to-max-heap/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
////First get the inorder array from BST, them populate the els in Postorder

// P-8  K-th Largest Sum Subarray
// https://www.codingninjas.com/studio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
// M-1 TC O(n^2 + n^2*logn^2) ~ O(n^2*logn^2)
// M-2 TC O(n^2*logk)

// P-9 Merge K Sorted Arrays
// https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_975379?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
// M-1 add all arrays in ans array, then sort it TC O(n*k *log(n*k))
// TC O(k*logk + n*k *logk) ~ O(n*k *logk) n: avg no of els in each array
// SC O(k for heap + n*k for ans array(neglecting it))~ O(k)

// P-10 Merge k sorted lists
// https://www.codingninjas.com/studio/problems/merge-k-sorted-lists_992772?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
// TC -//-
// SC O(k) for heap, nothing for ans

// P-11 Smallest Range From K Sorted List
// https://www.codingninjas.com/studio/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM
// TC O(k*logk + n*k *logk) ~ O(n*k *logk)
// SC O(k)
// LC-632

// P-12 LC-1642. Furthest Building You Can Reach 