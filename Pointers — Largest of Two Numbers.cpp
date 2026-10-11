
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p = &a, *q = &b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (*p > *q)
        cout << "Largest = " << *p;
    else
        cout << "Largest = " << *q;

    return 0;
}