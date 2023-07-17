// 2D Arrays/Matrices
//https://www.simplilearn.com/tutorials/data-structure-tutorial/two-dimensional-arrays
//Thus, simple 1D array can be used to store 2D data by mapping the each element in the array to a position in the matrix

// P-1 I/P & O/P a 2D array
/*
#include<iostream>
using namespace std;
int main()
{
int arr[3][4];
//input 2d array
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
}
//output 2d array
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
*/
// O/P
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

// for column wise i/p
/*
#include<iostream>
using namespace std;
int main()
{
int arr[3][4];
//input 2d array
for(int j=0;j<4;j++){
    for(int i=0;i<3;i++){
        cin>>arr[i][j];
    }
}
//output 2d array
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}*/
// o/p
// 1 4 7 10
// 2 5 8 11
// 3 6 9 12

//static initialisation- arr[3][3]={1,2,3,4,5,6,7,8,9} -- default row wise arrangement
//                  OR   arr[4][2]={{1,2},{3,4},{7,6},{7,8}} -- -//-

// totalRow= arr.size()
// totalCol= arr[0].size()

//P-2 search in matrix
/*
#include<iostream>
using namespace std;
bool search(int ip, int arr[][2], int a, int b){ //must provide atleast noof colms 
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if (arr[i][j]==ip){
                return true;
            }
        }
    }
    return false;
    
}
int main()
{
int arr[4][2]={{1,2},{3,4},{7,6},{7,8}};
//i/p
int ip;
cin>>ip;
cout<<search(ip,arr,4,2);
}
*/

//TC- O(row*col)

//P-3 sum of each row
/*
#include<iostream>
using namespace std;
int main()
{
int arr[4][2]={{1,2},{3,4},{7,6},{7,8}};
int rowSum;
for(int i=0;i<4;i++){
    rowSum=0;
    for(int j=0;j<2;j++){
        rowSum+= arr[i][j];
    }
    cout<<rowSum<<endl;
}
}*/

//sum of each column
/*
#include<iostream>
using namespace std;
int main()
{
int arr[4][2]={{1,2},{3,4},{7,6},{7,8}};
int colSum;
for(int j=0;j<2;j++){
    colSum=0;
    for(int i=0;i<4;i++){
        colSum+= arr[i][j];
    }
    cout<<colSum<<endl;
}
}
*/

//P-4 row with largest sum
/*
#include<iostream>
using namespace std;
int main()
{
int arr[4][2]={{1,2},{3,4},{7,6},{7,8}};
int rowSum,maxRow,maxSum;
for(int i=0;i<4;i++){
    rowSum=0;
    maxSum=-1;
    for(int j=0;j<2;j++){
        rowSum+= arr[i][j];
    }
    if(rowSum>maxSum){
        maxSum=rowSum;
        maxRow=i;
    }
}
cout<<maxRow;
}
*/

//P-5 print like a wave
//link- https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6

//TC- O(row*col) i.e. O(N)

//P-6 spiral matrix
//LC-54
// beautiful prob, beautiful soln
//TC- O(count) i.e. O(N)

//P-7 Rotate matrix
//LC= 48
//TC- O(row*col) + O(row*column/2) i.e. O(N)
//                           ^ for reverse

//P-8 Binary search in 2D array
//LC- 74
//TC- O(log(row*col))

//P-9 Binary Search in 2D array ||
//LC- 240
//TC- O(log(row*col))