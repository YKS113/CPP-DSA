//Stack- a real-world inspired Data Structure which adhers to LIFO principle
//stl of stack- stl gives an object container, internally embedded using array/LL/queue etc.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    cout<<s.top()<<endl;//will give garbaage value
    s.push(1);
    cout<<s.top()<<endl;
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
}
*/

//implement stack using arrays, by creating a stack class
#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    //states
    int *arr;
    int top;
    int capacity;

    //behaviours
    Stack(int capacity){
        arr= new int[capacity];
        top=-1;
        this->capacity=capacity;
    }

    void push(int a){
        if(top+1<capacity){
            arr[top+1]=a;
            top++;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    int pop(){
        if(top>=0){
            int temp=arr[top];
            arr[top]=0;
            top--;
            return temp;
        }
        else{
            cout<<"stack underflow"<<endl; //i.e. empty stack
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"empty stack"<<endl;
        }
    }

    int size(){
        if(top>=0){
            return top+1;
        }
        else{
            return 0;
        }
    }

    

};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    s.push(4);
    cout<<s.peek()<<endl;
}
//all operations/methods are happening in O(1)

//P-1 implement 2 stacks using only 1 array
//Link- https://www.codingninjas.com/studio/problems/two-stacks_983634