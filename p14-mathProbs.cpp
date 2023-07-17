//P-1 check if given no is prime or not
/*
#include<iostream>
using namespace std;

int main(){

int i,n;
bool a=0;
cin>>n;
for(i=2;i<n;i++){
if(n%i==0){
      a=1;
     break;
}

}
if(a==1){
    cout<<"not a prime no"<<endl;
}
else{
    cout<<"is a prime no"<<endl;
}
}*/

//P-2 count primes -- by sieve of eeratosthenes algo
//LC-204
//iterating over every element and checking if its prime O(N^2) will give TLE
//animation- https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
//TC- for every prime no. we do n/that prime no. iterations
//hence, total iterations= n/2 +n/3 +n/5 +n/7 +n/11 +...
//                       = n(1/2 +1/3 +1/5 +1/7 +1/11 +...)
//                       = n(log(logn))
//                     TC- O(Nlog(logN))

//Xtra- segmented seive

//P-3 find gcd/hcf of two nos
/*
#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        if(b>a){
            b=b-a;
        }
    }
    return a; //OR can also return b
}

int main()
{
    int a,b;
cin>>a;
cin>>b;
cout<<gcd(a,b);
}
*/
//Euclidean Algoritm for gcd
//https://www.codingninjas.com/studio/library/gcd-euclidean-algorithm

//P-4 Modular Exponentiation
//link- https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146
//video of anuj bhaiya/love babbar