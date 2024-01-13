//1. subtract the product and sum of digits of an integer

/* #include<iostream>
using namespace std;

int main(){
int n,sum=0,prod=1,a;
cin>>n;
while(n!=0){
  a=n%10;
  prod=prod*a;
  sum=sum+a;
  n=n/10;

}
cout<<"sub is "<<prod-sum<<endl;

} */

//2. find the no of '1' bits a given no has

/* #include<iostream>
using namespace std;

int main(){
int n,count=0,a;
cin>>n;
while(n!=0){
  if(n&1){
    count++;
  }
  n=n>>1;
  
}
cout<<"no of 1 bits are "<<count<<endl;

} */

//3. convert decimal(+ve) into binary

/* #include<iostream>
#include<math.h>
using namespace std;

int main(){

int n,i,bit,ans;
cin>>n;
i=0,ans=0;
while(n!=0){
   bit=n & 1;
   ans= (bit * pow(10,i)) + ans;
   n=n>>1;
   i++;
}
cout<<ans<<endl;
} */

//3. convert decimal(+ve) into binary M-2,but M-1 prffered,it involves bitwise op instead of arithmatic oprtres which are more costly
/* #include<iostream>
#include<math.h>
using namespace std;

int main(){

int n,i,bit,ans;
cin>>n;
i=0,ans=0;
while(n!=0){
   bit=n%2;
   ans=(bit*pow(10,i))+ans;
   n=n/2;
   i++;
}
cout<<ans<<endl;
}*/
 
//4. convert decimal(-ve) into binary 
//same as above but, find binary ans for +ve no & do 2's complement on o/p ans


//5. convert binary into decimal

// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){

// int n,i,digit,ans;
// cin>>n;
// i=0,ans=0;
// while(n!=0){
//    digit=n%10;
//    ans=(digit* pow(2,i))+ans;
//    n=n/10;
//    i++;
// }
// cout<<ans<<endl;
// }

//6. reverse integer (leetcode- 7)
//7. Complement of Base 10 Integer (lt 1009)
//8. power of two (lt)
//9. LC-10032 https://leetcode.com/problems/minimum-number-of-operations-to-make-array-xor-equal-to-k/