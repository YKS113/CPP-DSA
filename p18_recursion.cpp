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

#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    print(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print(n);
}
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
// TC-O(2^n) Using substitutive derivation- https://www.baeldung.com/cs/fibonacci-computational-complexity
// Using recursion tree- https://g.co/bard/share/3c836526f01a
// SC O(h)=O(n)

// TC of recursive approaches --https://g.co/bard/share/0cee7ac7aede

// P-2 Count Ways To Reach The N-th Stairs
// link-https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650

// LC-1137

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

// P-4 Find if given array is sorted
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

// P-5 find sum of elements of array
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

// P-5 linear search
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

// P-6 Binary search
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

// Xtra link-https://www.codingninjas.com/studio/problems/binary-search_972

// P-7 Reverse a string
/*
#include<iostream>
using namespace std;
void reverse(string &str, int s, int e){ //if only string str is passed it takes it by value, hence reference var is used
    if(s>e){
        return;
    }
    swap(str[s],str[e]);
    reverse(str,s+1,e-1);  // OR for single ptr method- s++;
                          //                           reverse(str,s,e);
}
int main()
{
    string str="abcde";
    int s=0,e=str.size()-1; OR e=str.size()-s-1 to solve using single pointer
    reverse(str,s,e);
    cout<<str;
}*/
// Xtra- https://www.codingninjas.com/studio/problems/reverse-the-string_799927

// P-8 check palindrome
/*
#include<iostream>
using namespace std;
bool check(string str, int s, int e){ //no need to pass by ref in this case
    if(s>e){
        return 1; //notice here, if s has reached beyond e means every str[s]=str[e]
    }
    if(str[s]!=str[e]){
        return 0;
    }
    else{
        return check(str,s+1,e-1);
    }


}
int main()
{
    string str="abcba";
    int s=0,e=str.size()-1;
    cout<<check(str,s,e);
}*/

// P-9 find a^b
/*
#include<iostream>
using namespace std;
int pow(int a,int b){
    if(b==0){
        return 1;
    }
    int ans=pow(a,b/2);
    if(b&1){ //b is odd
    return a*ans*ans;
    }
    else{
        return ans*ans;
    }
}

int main()
{
int a,b;
cin>>a>>b;
cout<<pow(a,b);
}
*/

// P-10 Bubble sort
/*
#include<iostream>
using namespace std;
void sort(int arr[],int n){ //here, already ptr is passed hence no need for ref var
        if(n==0 || n==1){
            return;
        }
        for(int i=0;i+1<n;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        sort(arr,n-1);
}
int main()
{
int arr[10]={3,2,6,4,1,7,8,10,9,5};
int n=10;
sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
*/
// similarly can be solved for selection and insrtn sorts

//====================================================================================

// P-11 Merge sort --Divide and Merge based algo
// Link- https://www.codingninjas.com/studio/problems/merge-sort_920442
// Reff- strivers video
// TC- O(N*logN) There are logn levels and for each level, we traverse the entire array once. expln- https://g.co/bard/share/810e034c1933
//https://g.co/bard/share/f65c2c260e35
// SC- O(N)  for every merge a temp vect is created ranging from size 2 initially to size n (after every merge step that call frame gets removed thus at any time the memory requirement is temp of that steps merge funcn, and max temp possible is N at final merge) , hence in worst case it's O(N)
 
// P-12 Count Inversion
// brute force-- double for loops
// link- https://www.codingninjas.com/studio/problems/count-inversions_615
// ref- strivers video

// P-13 Quick Sort
// link- https://www.codingninjas.com/studio/problems/quick-sort_983625
/*
TC- O(nlogn)
Best case- O(nlogn)
Worst case- O(n^2)-when the array is already sorted or reverse sorted, or when all elements are equal
hence, TC is variable betn O(nlogn) to O(n^2)

In-place algorithm --no extra space reqd
BUT, SC- O(logn) generally
    & O(n) worst case (sorted/reverse sorted/equal)
    hence, SC is variable betn O(logn) to O(n)
Unstable --changes position of repeting elements

Quick sort is better than merge sort --https://www.geeksforgeeks.org/quicksort-better-mergesort/
*/
// https://g.co/bard/share/7d6ae9ea13e7
//The advantage of Merge Sort for linked lists is that it doesn't require random access to elements, which is not efficient for linked lists since we need to traverse the list linearly. Also, Merge Sort is a stable sort, which means it maintains the relative order of equal elements in the sorted list.

// P-12 subsets
// LC- 78
//https://media.geeksforgeeks.org/wp-content/uploads/20230911132238/print-all-subsets.png
//TC O(2^n)
//SC O(2^n + n) ~ O(2^n)
// 2^n representing the space used to store all generated subsets in the ans vector. Since there are 2^N possible subsets for an array of size N, this is the primary contributor to space usage.
// n is the space of stack size, if we do not have to store subsets in ans, but only print them, then SC will be O(n)

// P-13 substrings
// link- https://www.codingninjas.com/studio/problems/subsequences-of-string_985087

//LC-491 
//LC-198

// P-14 Phone keypad 
// LC- 17

// P-15 Permutations of astring
// Link- https://www.codingninjas.com/studio/problems/permutations-of-a-string_985254
//https://prepinstadotcom.s3.ap-south-1.amazonaws.com/wp-content/uploads/2022/01/Artboard-%E2%80%93-1%402x4.webp
//TC O(n!) no. of permutations=n!                                                     
//SC O(n! + n) ~ O(n!) n! is ans arr size, n is stack size

// P-16 Permutations of nums array
// LC-46
 

// P-16 Rat in a maze
// Link- https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
