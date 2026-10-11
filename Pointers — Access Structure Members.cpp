
#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
    Student s;
    Student *p = &s;

    cout << "Enter roll number and marks: ";
    cin >> p->rollNo >> p->marks;

    cout << "Roll Number: " << p->rollNo << endl;
    cout << "Marks: " << p->marks;

    return 0;
}