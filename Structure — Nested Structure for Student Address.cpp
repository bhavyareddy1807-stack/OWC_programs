
#include <iostream>
using namespace std;

struct Address
{
    char city[30];
    int pin;
};

struct Student
{
    int rollNo;
    char name[30];
    Address addr;
};

int main()
{
    Student s;

    cout << "Enter roll number: ";
    cin >> s.rollNo;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter city and PIN: ";
    cin >> s.addr.city >> s.addr.pin;

    cout << "\nStudent Details\n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "City: " << s.addr.city << endl;
    cout << "PIN: " << s.addr.pin;

    return 0;
}