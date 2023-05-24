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

bool reverse(int arr[], int n){
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

#include<iostream>
using namespace std;

bool reverse(int arr[], int n){
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
   
}