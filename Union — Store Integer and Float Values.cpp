#include <iostream>
using namespace std;

union Number
{
    int i;
    float f;
};

int main()
{
    Number n;

    n.i = 50;
    cout << "Integer value = " << n.i << endl;

    n.f = 12.75;
    cout << "Float value = " << n.f << endl;

    return 0;
}