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
    s.pop();//Note- stack pop has no return value
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
}
*/

//implement stack using arrays, by creating a stack class
/*#include<bits/stdc++.h>
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
            //Note-stl stack pop has no return value, but we can implement if we want
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
}*/
//all operations/methods are happening in O(1)

//P-1 implement 2 stacks using only 1 array
//Link- https://www.codingninjas.com/studio/problems/two-stacks_983634

//P-2 Reverse a string using stack
#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
stack <char> s;
for(int i=0;i<str.length();i++){
    s.push(str[i]);
}
string ans="";
while(!s.empty()){
    ans.push_back(s.top());
    s.pop();
}
cout<<ans;
}

//P-3 Delete middle element from stack
//https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246?leftPanelTab=0?source=youtube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

//⭐P-4 Valid paranthesis
//https://www.codingninjas.com/studio/problems/valid-parenthesis_795104?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0?source=youtube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

//P-5 Insert An Element At Its Bottom In A Given Stack
//https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0?source=youtube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

//P-6 Reverse Stack Using Recursion
//Link- https://www.codingninjas.com/studio/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0?source=youtube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
//used two recursions
//TC- O(n^2) every el is compared with every other once
//SC O(n) call stack size

//P-7 Sort a Stack
//https://www.codingninjas.com/studio/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
//TC- O(n^2) worst case
//SC O(n) call stack size

//⭐P-8 Redundant Brackets
//https://www.codingninjas.com/studio/problems/redundant-brackets_975473?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio

//⭐P-9 Minimum Cost To Make String Valid
//https://www.codingninjas.com/studio/problems/minimum-cost-to-make-string-valid_1115770?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
//Note- possible remaining items in stack can be 1) {{{{{ 2) }}}}} 3) }}}}}{{{{{      We, need to reverse (a+1)/2 + (b+1)/2 bracts for making them pairs

//⭐LC-1249. Minimum Remove to Make Valid Parentheses


//⭐P-10 Next Smaller Element
//https://www.codingninjas.com/studio/problems/next-smaller-element_1112581?topList=love-babbar-dsa-sheet-problems&leftPanelTab=3&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio
//Xtra- Prev Smaller/larger Element (similar approach, but loop start from i=0)
//LC-1475. Final Prices With a Special Discount in a Shop

//⭐P-11 Largest Rectangle in Histogram
//LC 84
//https://g.co/bard/share/6a80c3fa416b

//P-11 N stacks in an array
//https://www.codingninjas.com/studio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0?source=youtube&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb

//P-12 Design a stack that supports getMin() in O(1)
//https://www.codingninjas.com/studio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?topList=love-babbar-dsa-sheet-problems?source=youtube&campaign=Codestudio_Lovebabbar&utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Lovebabbar

//P-13 The Celebrity Problem
//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1

//P-14  Max Rectangle in Binary Matrix with all 1's
//https://practice.geeksforgeeks.org/problems/max-rectangle/1