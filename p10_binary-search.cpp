// P=1 Binary search
/*
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
*/
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

/*
P-2 codestudio First and last occurance of an element in an array
Link-https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

here, we divide yhe problem into two parts, to find first el we binary search in left pat of array  and to find out last element we search in right part of array
*/
/*
P-3 find total no.of occurence of a praticular element
--similar approach to as thr above prob. , Total = lastIndex- firstIndex + 1
*/
/*
P-4 LC 852 find peak of mountain array M-1 submitted but M-2 is better and preffered
M-2--
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1,m;
        while(s<e){
            m=s+(e-s)/2;
            if(arr[m]<arr[m+1]){
                s=m;
            }
           else{
                e=m;
            }
        }
         return s;
    }
};
in this method our goal is singeling out the result element
you can return s or e
LC fault, hence only M-1 submitted
Graph- images\Peak of mountain array.png
*/


// P-5 Find pivot element/lowest no in a sorted rotated array
/*
#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1,m;
    while(s<e){
        m=s+(e-s)/2;
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
    }
    return arr[s];
}
int main()
{
int nums[8]={4,5,1,2,3};
cout<<pivot(nums,8)<<endl;
}
*/
/*
In left rotation, the elements of the array are shifted to the left by a certain number of positions, and the elements that “fall off” the left end of the array are added to the right end of the array. For example, if we have an array [1, 2, 3, 4, 5] and we left rotate it by 2 positions, we would get the array [3, 4, 5, 1, 2].

In right rotation, the elements of the array are shifted to the right by a certain number of positions, and the elements that “fall off” the right end of the array are added to the left end of the array. For example, if we have an array [1, 2, 3, 4, 5] and we right rotate it by 2 positions, we would get the array [4, 5, 1, 2, 3].

Graph- images\pivot.png
you can return s or e
*/

/*
P-6 Search in Rotated Sorted array
Link- https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

Here, we first find out pivot element,then we binary search in one of the two lines  i.e. from 0 to p-1 and form p to n-1 based on where the key lies using an if condition
*/

/*
P-7 sqrt of a number using binary search
LC-69
*/

// P-8 sqrt of no. upto a precision
/*
#include<iostream>
using namespace std;
int mySqrtInt(int x) {
       if(x==0){
           return 0;
       }
       int s=1,e=x,m,ans;
       while(s<=e){
           m=s+(e-s)/2;
           if(m==x/m){
               ans= m;
               break;
           }
          if(m>x/m){
               e=m-1;
               ans=e;
           }
           else{
               s=m+1;
           }
       }
       return ans;
    }
double sqrtPrecise(int num,int temp,int precision){
    double factor=1;
    double ans=temp;
    for(int i=1;i<=precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<num;j=j+factor){
            ans=j;
        }
    }
    return ans;

}
int main()
{
int num,temp;
cout<<"Enter the no."<<endl;
cin>>num;
temp=mySqrtInt(num);
cout<<sqrtPrecise(num,temp,3)<<endl;
}
*/

/*
P-9 Book allocation 
link-https://www.codingninjas.com/codestudio/problems/allocate-books_1090540

for ref- love babbar video
*/
/*
P-10 Painters partitin problem 

link- https://www.codingninjas.com/codestudio/problems/painter's-partition-problem_1089557?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2

similar to above prob
*/

/*
P-11 Aggressive cows

Link-https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559

for ref- strivers agressive cows
*/