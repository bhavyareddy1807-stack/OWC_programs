
#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    Employee e;
    Employee *p = &e;

    cout << "Enter employee ID: ";
    cin >> p->id;

    cout << "Enter employee name: ";
    cin >> p->name;

    cout << "Enter salary: ";
    cin >> p->salary;

    cout << "\nEmployee Details\n";
    cout << "ID: " << p->id << endl;
    cout << "Name: " << p->name << endl;
    cout << "Salary: " << p->salary;

    return 0;
}