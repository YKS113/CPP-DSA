#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0,end=size-1;
    while(start<=end){
       int mid=start + (end-start)/2;
        if(arr[mid]==key){
            return mid;
            
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
int even[6]={2,4,5,8,10,12};
int odd[5]={2,4,5,8,10};
cout<< binarySearch(even,6,10)<<endl;
cout<< binarySearch(odd,5,10)<<endl;
}
// here,theprogram is returning index of searched element if present
//  mid= (start+end)/2 but If start and end are near or equal to INT_MAX then sum of start and end will overflow and we will get different result from expected due to circular property, hence we use a modified veson of the same formula 
// i.e. start + (end-start)/2

//Note: for binary search, array must be sorted in either ascending or descending order
/*
for linear search TC= O(n)
for binary serach TC=O(logn)
for, n=1000 (size)
in worst case-
1000 i.e. n/2   k=1
500       n/4   k=2
250       n/8   k=3
125       n/16  k=4
62        n/32  k=5
31        n/64  k=6
15        n/128 k=7
7         n/256 k=8
3         n/512 k=9
1         n/1024 k=10 i.e. n/2^k ==> n/2^k=1 ==> n=2^k ==> logn=k 
0 - here we'll find the elment or return -1

since max possible iterations= k ==> TC= O(logn)


*/