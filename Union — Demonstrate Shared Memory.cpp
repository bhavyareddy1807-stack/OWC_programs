
#include <iostream>
using namespace std;

union Data
{
    int number;
    float value;
    char letter;
};

int main()
{
    Data d;

    d.number = 100;
    cout << "Integer = " << d.number << endl;

    d.value = 25.5;
    cout << "Float = " << d.value << endl;

    d.letter = 'A';
    cout << "Character = " << d.letter << endl;

    cout << "Size of union = " << sizeof(Data);

    return 0;
}