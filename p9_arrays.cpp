//  Find min/ max in an array
/*
#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int max= INT32_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;
};
int getMin(int arr[], int n){
    int min= INT32_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min= arr[i];
        }
    }
    return min;
};
int main()
{
int size;
cin>>size;
int num[100];
for(int i=0; i<size;i++){
    cin >> num[i];
};
   cout<<"max value is "<< getMax(num , size)<<endl;
   cout<<"min value is "<< getMin(num , size)<<endl;
}*/

// P-2 linear search
/*
#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0; i<n;i++){
        if(arr[i]==key){
            return 1;
            break;
        }
    }
    return 0;
};

int main()
{
int size,key;
cout<<"Enter the size of array"<<endl;
cin>>size;
int num[100];
for(int i=0; i<size;i++){
    cout<<"enter array element"<<endl;
    cin >> num[i];
};
   cout<<"enter the no. to be searched"<<endl;
   cin>> key;
   search(num,size,key)? cout<< "given no. is present in the array"<<endl: cout<< "given no. is not present in the array"<<endl;

}
*/

// P-3 (not preffered method) Reverse an array
/*
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int j=n-1, x;
    for(int i=0; i<n/2; i++){
        x= arr[i];
        arr[i]=arr[j];
        arr[j]=x;
        j--;
    }
    // to print the array
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }

};

int main()
{
int num[]={3,4,7,85,9};
int num2[]={3,4,7,85,9,2};

cout << reverse(num,5)<<endl;
cout << reverse(num2,6)<<endl;

}*/

// P-3 M-2 (preferred method) Reverse an array
/*
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0, end=n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // to print the array
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }

};

int main()
{
int num[]={3,4,7,85,9};
int num2[]={3,4,7,85,9,2};

cout << reverse(num,5)<<endl;
cout << reverse(num2,6)<<endl;

}*/
// o/p- {9,85,7,4,3}
//      {2,9,85,7,4,3}
// The function std::swap() is a built-in function in the C++ Standard Template Library (STL) which swaps the value of two variables.

// P-4 M-1 swap alternate elements/ adjacent elements
/*
#include<iostream>
using namespace std;

void swapAlt(int arr[], int n){
    int first=0, second=1;
    while(second<n){
        swap(arr[first], arr[second]);
        first+=2;
        second+=2;
    }
    // to print the array
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }

};

int main()
{
int num[]={3,4,7,85,9};
int num2[]={3,4,7,85,9,2};

cout << swapAlt(num,5)<<endl;
cout << swapAlt(num2,6)<<endl;

}
*/
// o/p- {4,3,85,7,9}
//      {4,3,85,7,2,9}

// P-4 M-2 swap alternate elements/ adjacent elements
/*
#include<iostream>
using namespace std;

void swapAlt(int arr[], int n){
    for(int i=0; i+1<n; i+=2){
        swap(arr[i], arr[i+1]);
    }
    

};
void printArray(int arr[], int n){
// to print the array
    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
int num[]={3,4,7,85,9};
int num2[]={3,4,7,85,9,2};
swapAlt(num,5);
printArray(num,5);
swapAlt(num2,6);
printArray(num2,6);

}*/

/* 
 P-5 CodeStudio - find unique element OR LC 136
 link- https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
 M-1 & M-2 (M-2 short and preffered
            Note- a^a=0; and a^0=0; these a^b^a^b^c etc get stored in ans variable and a-a and b-b get xored to 0 then c get xored with 0 to give c hence, ans=c)
 */
/*
P-6 Leetcode 1207 unique no of occurences
*/
/*
P-7 CodeStudio duplicte elemnt in array
link- https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

we first xor all elments in array then we xor the ans with all integers from 1 to n-1 so that no.s occuring two times get xored to zero and the one occuring three times remains and gets xored with 0 thus, ans= duplicate no. 
*/

/*
P-8 Leetcode 442 Find all duplicates in array
*/

/*
P-9 Codechef Intersection of sorted arrays
Link- https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

M-1 & M-2(more optimized)
*/

/*
P-9 CodeChef Pair sum
Link- https://www.codingninjas.com/codestudio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1

This line is for misleading purpose--
In case two pairs have same first element then the pair with smaller second element should come first.
-- if two pairs have same first value then there second value also will be same since, their sum is same and we know a+b=c if a1=a2 and c1=c2 then b1 has to be equal to b2
*/

/*
P-10 CodeChef 3 sum
lik-  https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1
*/

/*
P 11-Codechef Sort 0 1
link- https://www.codingninjas.com/codestudio/problems/sort-0-1_624379
*/
/*
P-12 Codechef Sort 0 1 2
link- https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055

since mid is moving faster than start (i.e.mid moves when mid==0 & also when mid==1 but start moves only when mid==0 ),even if mid goes ahead leaving 2 at its place(whwn swapped with start) then at some point start will come on its place and swap it with latest mid
*/
/*
P-13 LC-121 best time to buy and sell stock
*/
/*
P-14 LC-122 best time to buy and sell stock-II

solved using concept of local minima and local maxima 
watch anuj bhaiya video for ref
*/