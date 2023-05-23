// if given input is upper case alphabet/ lower case/ numeric
#include<iostream>
using namespace std;

int main(){
 
 char a;            
 cout<< "Enter the character"<<endl;
 cin>>a;
 if(a>=48&& a<=57){
     cout<<"a is numeric"<<endl;
 }
 else if(a>=65&& a<=90){
     cout<<"a is upper case"<<endl;
 }
 else if(a>=97&& a<=122){
     cout<<"a is lower case"<<endl;
 }


}