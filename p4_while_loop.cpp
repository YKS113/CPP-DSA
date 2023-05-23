// sum of all numbers from 1 to n
/* #include<iostream>
using namespace std;

int main(){

int sum,n,i;
cin>>n;
sum=0;
i=1;
while(i<=n){
    sum=sum+i;
    i++;
}
cout<<"sum is : "<<sum<<endl;

} */



// sum of all even nos. upto n

/* #include<iostream>
using namespace std;

int main(){

int sum,n,i;
cin>>n;
sum=0;
i=2;
while(i<=n){
    sum=sum+i;
    i=i+2;
}
cout<<"sum is : "<<sum<<endl;


} */

// show if no is prime or not
#include<iostream>
using namespace std;

int main(){
  int n,i;
  cin>>n;
  i=2;
  while(i<n){
      if(n%i==0){
          cout<<"n is prime for "<<i<<endl;
      }
      else{
          cout<<"n is not prime for "<<i<<endl;
      }
      i++;
  }
 
}