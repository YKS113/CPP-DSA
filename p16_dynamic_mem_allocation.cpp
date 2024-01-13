//1. Reference variable-- a single mem locn with two diff names
/*
#include<iostream>
using namespace std;

int update1(int n){
    n++;
}
int update2(int& n){
    n++;
}

int main()
{
int a=5;
int &b=a; //b is a referance variable,it refers/accesses to value of var a
cout<<a<<" "<<b<<endl;
a++;
cout<<a<<endl;
b++;
cout<<a<<endl;
//2
update1(a);     //pass by value
cout<<a<<endl; 
update2(b);     //pass by reference
cout<<a<<endl;

//Use-- mainly in function calling
In call by value method of parameter passing, the values of actual parameters are copied to the function’s formal parameters.
There are two copies of parameters stored in different memory locations.
One is the original copy and the other is the function copy.
Any changes made inside functions are not reflected in the actual parameters of the caller.

In call by reference method of parameter passing, reference variables of the actual parameters is passed to the function as the formal parameters.
Both the actual and formal parameters refer to the same locations.
Any changes made inside the function are actually reflected in the actual parameters of the caller.

}
//3 we can also return a ref variable from a func
//But this is bad practice, compiler may throw error since the returned value will be used in main function/some other function and that function will get access to local var a of func (out of scope of func), also these local vars of func are deleted from mem after its execution and, the returned value will still be pointing to that empty/garbage/other task's mem locn
int& func(int a){
    int &b=a;
    return b;
}
*/
//Xtra- take similar precaution with pointers also

//4  dynamic memory allocation

//For C language- images\Dynamic_Mem_allocn_in_C

#include<iostream>
using namespace std;
int main()
{
//we know that this is bad practice, since here, array mem is being allocated at runtime instead of compile time, there are two parts of mem stack and heap, stack is much smaller and may not have enough space for the large array creation during runtime, but if arr size is known at compile time, stack increases its size.
// int n;
// cin>>n;
// int arr[n];

//to tackle this, and allocate mem dynamically during runtime, we take help of heap, we can use 'new' keyword for mem allocn in heap, but we cannot assign a name to it, it returns only address of mem locn, hence we use pointers
int n;
cin>>n;
int *p= new int; //for allocating a variable in heap 
int *p2=new int[n];
int* p3=new int(40);
int sum=0;
for(int i=0;i<n;i++){
    cin>>*(p2+i);
    sum+=*(p2+i);
}
cout<<sum<<endl;
cout<<*p3<<endl;

//var is created in heap but its ptr is created in stack
//Note- in stack, memory is freed after execution of funcn but mem created in heap is not freed automatically, it needs to be freed manually using delete keyword ; ptr to this var is not deleted by delete keyword, it remains a wild ptr, and gets deleted after its parent function pops from stack
delete p;
delete []p2;

}

//5  dynamic memory allocation for 2d arrays

//https://www.geeksforgeeks.org/memory-layout-of-c-program/
//https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
//https://g.co/bard/share/5f342fc6a16b
//https://g.co/bard/share/83610a863930

//https://g.co/bard/share/4663f3c24990

