//queue- a real-world inspired Data Structure which adhers to FIFO principle
//stl of queue stl gives an object container, internally embedded using array/LL/stack etc.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);
    cout<<q.size()<<endl;

}*/

//P-1 Implement queue using array
#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int front;
    int back;
    int capacity;
    Queue(int capacity){
        this->capacity=capacity;
        arr= new int[capacity];
        front=back=-1;
        
    }
    void Push(int data){
        if(back+1<capacity){
            arr[back+1]=data;
            back++;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    void Pop(){
        if(front<back){
            arr[front+1]=0;
            front++;
        }
        else{
            cout<<"empty queue"<<endl;
            front=back=-1;
        }
    }
    int Front(){
        if(front<back){
            return arr[front+1];
        }
        else{
            cout<<"empty queue"<<endl;
        }
    }
    int Back(){
        if(front!=back){
            return arr[back];
        }
        else{
            cout<<"empty queue"<<endl;
        }
    }

};
int main()
{
    Queue q(6);
    q.Push(1);
    q.Push(2);
    cout<<q.Front()<<endl;
    cout<<q.Back()<<endl;
    q.Pop();
    cout<<q.Front()<<endl;
    q.Push(1);
    q.Push(2);
    q.Push(1);
    q.Push(2);
    q.Push(1);
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();

}
