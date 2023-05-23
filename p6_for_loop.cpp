// for loop questions

//1. print no. from 1 to n
/* #include<iostream>
using namespace std;

int main(){

int a,n;
cin>>n;
for(a=1;a<=n;a++){
    cout<<a<<endl;
}

} */

//1.M-2 print no. from 1 to n
/* #include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
for(int a=1;a<=n;a++){
    cout<<a<<endl;
}

} */

//1.M-3 print no. from 1 to n
/* #include<iostream>
using namespace std;

int main(){

int n,a=1;
cin>>n;
for(;a<=n;a++){
    cout<<a<<endl;
}

} */

//1.M-4 print no. from 1 to n
/* #include<iostream>
using namespace std;

int main(){

int n,a=1;
cin>>n;
for(;a<=n;){
    cout<<a<<endl;
    a++;
}

} */

//1.M-5 print no. from 1 to n
/* #include<iostream>
using namespace std;

int main(){

int n,a=1;
cin>>n;
for( ; ; ){
    if (a<=n)
    { cout<<a<<endl;
     }
    else{
        break;
    }
    
    a++;
}

} */

//2. print fibonacci series
/* #include<iostream>
using namespace std;

int main(){

int n,a,b,c;
n=10,a=0,b=1;
cout<<a<<endl<<b<<endl;
for(int i=1; i<=n; i++){
    c=a+b;
    cout<<c<<endl;
    a=b,b=c;
}


} */

//3. check if no is prime
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
}

