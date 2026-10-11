
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
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks;

    return 0;
}