
#include <iostream>
using namespace std;

enum Operation
{
    ADD = 1, SUBTRACT, MULTIPLY, DIVIDE
};

int main()
{
    Operation op;
    int choice;
    float a, b;

    cout << "1. Add\n2. Subtract\n";
    cout << "3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Invalid choice";
        return 0;
    }

    op = static_cast<Operation>(choice);

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (op)
    {
        case ADD:
            cout << "Result = " << a + b;
            break;
        case SUBTRACT:
            cout << "Result = " << a - b;
            break;
        case MULTIPLY:
            cout << "Result = " << a * b;
            break;
        case DIVIDE:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero is not allowed";
            break;
    }

    return 0;
}