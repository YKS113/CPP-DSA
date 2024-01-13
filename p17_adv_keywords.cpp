//A preprocessor is a program that is run before the compiler compiles your code. It takes your source code and performs various transformations on it, such as:   Including other files, Defining macros, Conditional compilation, Line control

//1. #include --imports mentioned liabrary/s before compilation
//2. macros-
#include<iostream>
using namespace std;

#define PI 3.14

int a=5; //global variable

int main()
{
//if we have to use a particular value many no of times in our code, we can define it as a variable globally and use it, but in this case we need to allocate memory for it.
double pi=3.14;
int r=5;
double area= pi*r*r;
cout<<area<<endl;

//soln--
area=PI*r*r; //we define a macro using #define; the prerocessor replaces all occurrences of the macro name (here, PI) with the definition of the macro (value or a peice of code,here 3.14) in the code and thus no seperate memory is allocated for it.                                                                              Also, unlike global variable macro cannot be changed later in the program            It need not be terminated with ;
cout<<area<<endl;

//Types of macros- https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/

//3.

a++; //we can access global variable in any/all funcn of the program, using global var is bad practice because any funcn can modify it and that will affect all other funcns
cout<<a;
}

//4. inline funcn https://www.geeksforgeeks.org/inline-functions-cpp/
//5. default argument
//6. comstant var
