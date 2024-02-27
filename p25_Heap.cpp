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
//Insertion in heap: add new el at end of array, check if its parent is smaller than it, if yes swap them, do this untill you reach root node
#include<iostream>
using namespace std;
class Heap {
    public:
    int arr[100];
    int size=0;

    void insert(int val){
        int i=size+1;
        arr[i]=val;
        while(i>1){
            int parent=i/2;
            if(arr[parent]<arr[i]){
                swap(arr[parent],arr[i]);
            }
            i=i/2;
        }
        size++;
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    Heap h1;
    h1.insert(60);
    h1.insert(50);
    h1.insert(40);
    h1.insert(30);
    h1.insert(20);
    h1.insert(55);
    h1.print();
    h1.insert(65);
    h1.print();
}