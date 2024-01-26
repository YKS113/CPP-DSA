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

//P-4 find LCM of two nos
//Link- https://www.codingninjas.com/studio/problems/lcm_4604173
//fact- lcm(a,b)*gcd(a,b)=a*b

//P-4 factorial of very large no. using modulo
/*
#include <bits/stdc++.h>
using namespace std;

// Returns value of n! % p
int modFact(int n, int p)
{
	if (n >= p)
		return 0;

	int result = 1;
	for (int i = 1; i <= n; i++)
		result = (result * i) % p; //here, (a*b)%c==(a%c*b%c)%c is not used, Read-- https://www.geeksforgeeks.org/modulo-1097-1000000007/
        //OR result = (result * i%p) % p; here, property is used but, since result is always 

	return result;
}

// Driver program
int main()
{
	int n = 25, p = 29;
	cout << modFact(n, p);
	return 0;
}
*/
//P-5 Modular Exponentiation
//https://www.geeksforgeeks.org/modulo-1097-1000000007/

//link- https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146

