//1. simple calculator
/* #include<iostream>
using namespace std;

int main(){

int a,b;
char op;
cout<<"Enter first no"<<endl;
cin>>a;
cout<<"Enter second no"<<endl;
cin>>b;
cout<<"Enter the operation"<<endl;
cin>>op;

switch(op){
    case '+' : cout<<"ans is "<< a+b;
                break;
    case '-' : cout<<"ans is "<< a-b;
                break;
    case '*' : cout<<"ans is "<< a*b;
                break;
    case '/' : cout<<"ans is "<< a/b;
                break;
}


} */

//2. no of 100,50,20,1 Rs notes required to make given amount

 #include<iostream>
using namespace std;

int main(){

int amount;
cout<<"Enter amount"<<endl;
cin>>amount;
int Rupees;

switch(1){
   case 1: cout<<"no of 100 Rs notes reqd- "<<amount/100<<endl;
                 amount= amount%100;
   case 2: cout<<"no of 50 Rs notes reqd- "<<amount/50<<endl;
                 amount= amount%50;
   case 3: cout<<"no of 20 Rs notes reqd- "<<amount/20<<endl;
                 amount= amount%20;
   case 4: cout<<"no of 1 Rs notes reqd- "<<amount/1<<endl;
                 amount= amount%1;


}


}