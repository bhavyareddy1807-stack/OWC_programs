
#include <iostream>
using namespace std;

int main()
{
    int a[5], sum = 0;
    float average;

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    for (int i = 0; i < 5; i++)
        sum += a[i];

    average = sum / 5.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}