
#include <iostream>
using namespace std;

enum Signal
{
    RED = 1, YELLOW, GREEN
};

int main()
{
    int n;

    cout << "1. Red\n2. Yellow\n3. Green\n";
    cout << "Enter signal number: ";
    cin >> n;

    switch (n)
    {
        case RED:
            cout << "STOP";
            break;
        case YELLOW:
            cout << "WAIT";
            break;
        case GREEN:
            cout << "GO";
            break;
        default:
            cout << "Invalid signal";
    }

    return 0;
}
