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
/*#include<iostream>
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
        if(front!=back){
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
*/

//P-2 Implement circular queue
//https://www.codingninjas.com/studio/problems/circular-queue_1170058?leftPanelTab=3&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

//⭐LC-622. Design Circular Queue
//⭐LC-146. LRU Cache
//We use Doubly LL instaed of queue because its costly to get item in queue,delete it from its position and add to latest position/

//P-3 Implement deque(non-circular)
//⭐LC-641. Design Circular Deque

//P-3 Implement Queue using Stacks
//LC- 232

//P-4 Implement Stack using Queues
//LC- 225

//P-5 Reverse a queue
//https://practice.geeksforgeeks.org/problems/queue-reversal/1

//⭐P-6 First negative integer in every window of size k
//sliding wind + queue type Q
//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

//⭐P-7 Sum of minimum and maximum elements of all subarrays of size k.
//https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/
//Approch- use a deque, if arr[i]>q.front() then, push_front ; if arr[i]<q.back() then, push_back(); now slide the wind, check if prev el of arr was at front or back if yess remove it; also check if new el is max or min, accordingly push it at front/back

//P-8 Reverse First K elements of Queue
//https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

//⭐P-9 First non-repeating character in a stream
//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1b  

//P-10 Interleave the First Half of the Queue with Second Half
//https://practice.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
//Xtra- solve above prob using stack only-- soln- store half q in stack, reverse stack then interleave

//⭐P-11 N queues in an array
//https://www.codingninjas.com/studio/problems/n-queue-using-array_1170053