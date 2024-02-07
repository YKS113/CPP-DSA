/*
char arrays are also called strings
declaration-- char ch[5];
input-- cin>> ch;
output-- cout<< ch;
'\0' -- null charactr/terminator is an ASCII char that works as a control character, it tells the compiler that the string has ended
space, tab, enter etc. when added in a string they effectively work as null character/terminator and ends strig there


In C/C++ string literals are automatically appended with terminating zero. So if you will write for example

char x[] = "Word";
then the size of the array will be equal to 5 (but not the value of size() function) and the last element of the array will contain '\0'.

char x[] = {'W', 'o', 'r', 'd'};
then the compiler allocates exactly the same number of elements as the number of the initializers. That is in this case the array will have only 4 elements.

However if you would write the following way

char x[5] = {'W', 'o', 'r', 'd'};
then the fifth element will contain the terminating zero because it has no corresponding initializer and will be zero-initialized.

Also take into account that the following record is valid in C but invalid in C++

char x[4] = "Word";

size() function for a charArray / string returns the number of characters in the array, excluding the null character. It counts only the actual characters stored in the array until it encounters the null character, which is used as a termination marker in C-style strings.


string-- https://www.geeksforgeeks.org/stdstring-class-in-c/
benefits of string over charArray--
1.input methods - getline(),push_back,pop_back
2.dynamicmemory allocation (works as vector for charArray)
3.can write line instead of single word i.e. can use space,tab (not enter) using getline


NOTE-- '' is used for a character & "" is usedfor a string/stream of characters unlike JS these cannot be used interchangebly.
*/

/* P-1 find length of string
#include<iostream>
using namespace std;
int length(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
      count++;
    }
    return count;
}
int main()
{
char name[20];
cout<<"enter your name"<<endl;
cin>>name;
cout<< "length of your name is "<<length(name)<<endl;
}
*/

/*
P-2 reverse a string
#include<iostream>
using namespace std;
void reverse(char name[],int l){
    int s=0,e=l-1;
    while(s<e){
        swap(name[s],name[e]);
    }
}
int length(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
      count++;
    }
    return count;
}
int main()
{
char name[20];
cout<<"enter your name"<<endl;
cin>>name;
int l=length(name);
reverse(name,l);
cout<< "reverse is "<<name<<endl;
}
*/
/*
P-3 LC 344 reverse a string
*/

/*
P-4 check if given string is a palindrome
A palindrome number is a number that is same after reverse. For example 121, 34543, 343, 131, 48984 etc.
#include<iostream>
using <vector> std;
using namespace std;
bool checkPalinrome(vector<char>& v){
    int s=0,e=v.size()-1;
    while(s<e){
        if(v[s]=v[e]){
            s++;e++;
        }
        else{
            return 0;
        }
    }
    return 1;
}
int main()
{
vector<char> v;
cout<<"enter your string"<<endl;
cin>> v;
checkPalinrome(v);
cout<< v;
}

*/

/*
P-5 check if given string is a palindrime
link-- https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
*/

/*
P-6 Reverse words in a string
link- https://www.codingninjas.com/codestudio/problems/reverse-the-order-of-words-in-a-string_1264991


*/
/*
P-7 max occuring character in a string
link-- https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

The entire array can be initialized to zero very simply. This is shown below.
int arr[10] = {0};
However, it is not possible to initialize the entire array to a non-zero value using the above method. This is shown below.
int arr[10] = {5};
In the above example, only the first element will be initialized to 5. All others are initialized to 0.
A for loop can be used to initialize an array with one default value that is not zero. This is shown below.
for(i = 0; i<10; i++) {
   arr[i] = 5;
}
*/
/*
P-8- Custom Sort String
Link- https://www.codingninjas.com/studio/problems/specific-order_1102295?leftPanelTab=1
*/
/*
P-8 replace spaces
link-- https://www.codingninjas.com/codestudio/problems/replace-spaces_1172172
Both M-1 & M-2 are IMP
*/

/*
P-9 Remove all occrences of a substring
LC- 1910
*/
/*
P-10 permutations in a string
LC-567
sliding window approach
*/
// Xtra- check if two strings are anagrams of each other
/*
P-11 remove adjacent duplicates from string
LC-1047
actually a stack question
*/
/*
P-11 compress a string
LC-443
TC- O(n)
*/

// https://g.co/bard/share/4dab91c5e729
// https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus

// maps--https://g.co/bard/share/ba48704283a3

// P-12 LC-3006
// TC  for pattern matching O(n*m) n:l(str) m:l(pattern)

// P-13 LC-3008
// KMP algo used for pattern matching; watch abdul bari youtube video
////TC  for pattern matching O(n+m)

//P-14 LC-76. Minimum Window Substring (counting sort M-2)
