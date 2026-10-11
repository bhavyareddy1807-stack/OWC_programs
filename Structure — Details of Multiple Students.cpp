
#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    char name[30];
    float marks;
};

int main()
{
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter roll number, name and marks: ";
        cin >> s[i].rollNo
            >> s[i].name
            >> s[i].marks;
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < 3; i++)
    {
        cout << s[i].rollNo << " "
             << s[i].name << " "
             << s[i].marks << endl;
    }

    return 0;
}