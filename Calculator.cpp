#include <iostream>
using namespace std;

int main()
{
    cout << "\n"
         << "******************Calculator*******************"
         << "\n";

    char op;
    double num1, num2;

    cout << "\n" << "Enter #1: ";
    cin >> num1;

    cout << "\n" << "Enter #2: ";
    cin >> num2;

    cout << "Enter Operation ( + - / *): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    default:
        cout << "Enter correct operator!";
        break;
    }

    cout << "\n"
         << "******************Calculator*******************"
         << "\n";

    return 0;
}