// Recursion -- a function calling itself directly or indirectly(eg. func a calling b and b again calling a)
// Use- when soln of a bigger problem depends upon soln of a smaller prob of the same type                                                                                 Eg. to find 2^n like-- 2^4=2* 2^3 i.e. 2^n=2* 2^n-1 i.e. f(n)=2*f(n-1) this is called a recursive relation                                                                Eg.2 to find n!, like-- 5!=5*4! i.e. n!=n*(n-1)! i.e. f(n)=n*f(n-1)                 The case where recursion needs to stop is called the Base Case (in above cases 2^0 and 0! resp.)
/*
#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    //recursive reln/call
    return n * factorial(n-1);
}
int main()
{
int n;
cin>>n;
int ans=factorial(n);
cout<<ans<<endl;
}
*/
// after each function call, funcs get stacked up on call stack & when prog hits base case, all funcs return one by one to their respective parent/caller/lower neighbour in stack
/*
#include<iostream>
using namespace std;
int pow(int a, int n){
    if(n==0){
        return 1;
    }
    return a * pow(a,n-1);
}
int main()
{
int a,n;
cin>>a>>n;
int ans=pow(a,n);
cout<<ans<<endl;
}
*/

// print all nos from n to 1
/*
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}
int main()
{
int n;
cin>>n;
print(n);
}*/
// o/p- 5 4 3 2 1
// for every function call the respective no is printed; at n==0, control is returned to caller at print(n-1); where n was 1; after that instruction, there is no other instruction so that funcn is cleared from stack and a void return is passed to its caller(i.e. control is returned to caller) at print(n-1) this goes on until entire stack is cleared
// This is an examople of Tail Recursion-- recursive relation is at end of code
/*
#include<iostream>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<" ";
}
int main()
{
int n;
cin>>n;
print(n);
}
*/
// o/p- 1 2 3 4 5
// here, after it hits n==0, control is returned to at print(1-1) after that cout<<n<<" " is executed and since function body has ended it automatically returns control to its caller it goes on untill stack is cleared
// this is an eg of Head Recursion, since recursive relation is before func logic

// P-1 nth Fibonnaci number
// eg- 0,1,1,2,3,5,8,...
// LC- 509

// TC of recursive approaches --https://g.co/bard/share/0cee7ac7aede

// P-2 Count Ways To Reach The N-th Stairs
// link-https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650

// P-3 Say digits
// eg. for i/p 314 o/p- three one four
/*
#include <iostream>
using namespace std;
string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; // each word is mapped to respective no. M-2 use switch case for the same; This is a 2d string-- array of strings
void say(int n)
{
    if (n == 0)
    {
        return;
    }
    say(n / 10);
    cout << arr[n % 10] << " ";
}
int main()
{
    int n;
    cin >> n;
    say(n);
}*/
// head recursion, hence printing will be reverse 3-1-4,but in our case its useful

//P-4 Find if given array is sorted
/*
#include<iostream>
using namespace std;
bool check(int arr[],int size){
    if(size==0 || size==1){ //in these cases array is already sorted
        return true;
    }
    if(arr[0]>arr[1]){ //check if starting of array is not sorted (base case)
        return false;
    }
    else{ //since that part is sorted, check for remaining part of array
    return check(arr+1,size-1);
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    bool ans=check(arr,size);
    if(ans){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }

}*/

//P-5 find sum of elements of array 
/*
#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if(size==0){ //in this case sum is zeo
        return 0;
    }
    if(size==1){ //in this case, sum is equal to value of single element
        return arr[0];
    }
    return arr[0]+ sum(arr+1,size-1); //first el + remainingPartSum
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<sum(arr,size);
    

}
*/

//P-5 linear search
/*
#include<iostream>
using namespace std;
bool find(int arr[],int size, int a){
    if(size==0){ 
        return 0;
    }
    if(arr[0]==a){ //in this case, sum is equal to value of single element
        return true;
    }
    return find(arr+1,size-1,a); 
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int a=4;
    cout<<find(arr,size,a);
    
}
*/


//P-6 Binary search
/*
#include<iostream>
using namespace std;
bool find(int arr[], int s, int e, int a){
    if(s>e){ 
        return 0;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==a){ //mid==a
        return true;
    }
    else if(a>arr[mid]){
        return find(arr,mid+1,e,a);
    }
    else{
        return find(arr,s,mid-1,a);
    }
     
}
int main()
{
    int arr[]={1,2,3,4,5};
    int s=0,e=4;
    int a=4;
    cout<<find(arr,s,e,a);
    
}*/

//Xtra link-https://www.codingninjas.com/studio/problems/binary-search_972