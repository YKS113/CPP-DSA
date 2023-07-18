//1. syntax for declaring and accessing pointers
/*
#include<iostream>
using namespace std;
int main()
{
int a=10;
cout<<&a<<endl; //& is address of operator, gives address of variable
int *ptr=&a; //OR int* ptr=&a; OR int * ptr=&a;
cout<<ptr<<endl; //gives address of variable, the pointer is pointing to
cout<<*ptr<<endl; //gives value of the variable to which the pointer is pointing to;here, * is derefrencing operator, it's different from * used      during declaration of ptr,(it's confusing for begginers, it's not immediately obvious that the same operator has two different meanings.)
cout<<*&a<<endl;//* derefrences &a & gives value of variable whose address is stored in &a i.e value of a
cout<<sizeof(a)<<endl;
cout<<sizeof(ptr)<<endl; //gives 4bytes or 8bytes depends on system arch 32bit or 64bit

//another way of initializing ptr-
//Note int *p; is a bad practice as it'll point to some random (maybe private) locn
int b=10;
int *p=0; //ptr will point to null location i.e. segmentationfault
p=&b;
cout<<*p<<endl;


b=1;
cout<<"before"<<b;
*p++;
cout<<"after"<<b; //any operation on *ptr will affect b
}
*/

//2. for arrays
/*
#include<iostream>
using namespace std;
int main()
{
int arr[10]={0,5};
cout<<"address of  first element of arr is"<<arr<<endl;//location of arrray is referrenced to its first element, and arr gives address of array
cout<<"address of  first element of arr is"<<&arr[0]<<endl;
cout<<"address of  second element of arr is"<<&arr[1]<<endl;//thus can be done for every elment
cout<<*arr<<endl;//* derefrences arr & gives value stored at the address stored in arr i.e value of arr[0]
cout<<*arr+1<<endl;
cout<<*(arr+1)<<endl; //derefrences to arr+1 i.e next memory block address by (adding 4 bytes, since its int, in char it'll add only 1 byte to take it to next mem block)

//new formula--- arr[i]=*(arr + i) OR i[arr]=*(i+arr) -using rarely used syntax
int *ptr= &arr[0];
cout<<*ptr<<endl;
cout<<ptr<<endl;
cout<<sizeof(ptr)<<endl;
cout<<sizeof(arr)<<endl; //10*4

}
*/

//3. for char arrays
/*
#include<iostream>
using namespace std;
int main()
{
//in int array
int arr[10]={0};
cout<<arr<<endl; //prints address of arr[0]
//while in char array, it gives entire array
char ch[6]="hello";
cout<<ch<<endl;
char *p=ch; //OR char *p=&ch[0]
cout<<p<<endl; //prints entire string
//this is because cout works differently in case of char arrays, it takes the starting address and prints all subsequent chars until it encounters /0
}
*/

//4.for functions
#include<iostream>
using namespace std;
int func(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}
int update1(int *p){
    p++;
    
}
int update2(int *p){
    *p=*p+1; 
    //++ has higher precedence than * , so *ptr++ is treated as *(ptr++) . This increments the pointer, not the number that it points to. To increment the number, use (*ptr)++  

}
int sum(int arr[],int n){ //OR we can write int sum(int *arr,int n){}
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
int a=5;
int *p=&a;
func(p); //since argument takes address,hence parameter must also be address
//OR
func(&a);

//2
cout<<"before "<<p<<endl; 
update1(p);
cout<<"before "<<p<<endl;//new ptr is created in func, updation happens in local scope
cout<<"before "<<*p<<endl;
update2(p);
cout<<"after "<<*p<<endl;// a is updated

//3
int arr[5]={1,2,3,4,5};
cout<<sum(arr,5)<<endl; //here we pass arr i.e. address of first el
//Tip- we can also send only a part of array to the function e.g. sum(arr+3,5) will print sum from 4 
}