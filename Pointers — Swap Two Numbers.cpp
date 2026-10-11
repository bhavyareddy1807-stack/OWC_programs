
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    int *p = &a;
    int *q = &b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping: "
         << a << " " << b;

    return 0;
}