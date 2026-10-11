
#include <iostream>
using namespace std;

struct Student
{
    char name[30];
    int marks;
};

int main()
{
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;
    }

    int highest = 0;

    for (int i = 1; i < 3; i++)
    {
        if (s[i].marks > s[highest].marks)
            highest = i;
    }

    cout << "Top Student: " << s[highest].name << endl;
    cout << "Highest Marks: " << s[highest].marks;

    return 0;
}