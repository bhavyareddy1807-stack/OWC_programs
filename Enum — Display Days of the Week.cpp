
#include <iostream>
using namespace std;

enum Day
{
    MONDAY = 1, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

int main()
{
    Day d;

    int n;
    cout << "Enter day number (1-7): ";
    cin >> n;

    if (n < 1 || n > 7)
    {
        cout << "Invalid day number";
        return 0;
    }

    d = static_cast<Day>(n);

    switch (d)
    {
        case MONDAY:    cout << "Monday"; break;
        case TUESDAY:   cout << "Tuesday"; break;
        case WEDNESDAY: cout << "Wednesday"; break;
        case THURSDAY:  cout << "Thursday"; break;
        case FRIDAY:    cout << "Friday"; break;
        case SATURDAY:  cout << "Saturday"; break;
        case SUNDAY:    cout << "Sunday"; break;
    }

    return 0;
}