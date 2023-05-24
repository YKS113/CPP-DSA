// Find if given no is +ve / -ve / zero

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the no." << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "No. is zero" << endl;
    }
    else if (n > 0)
    {
        cout << "No. is positive" << endl;
    }
    else
    {
        cout << "No. is negative" << endl;
    }
}