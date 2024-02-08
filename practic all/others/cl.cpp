#include <iostream>
using namespace std;

int main()
{
    char op;
    int number1, number2;

    while (true) {
        cout << "Enter first number: " << endl;
        cin >> number1;

        cout << "Enter operator you want to perform (or 'q' to quit):" << endl;
        cin >> op;

        if (op == 'q') {
            break; // Exit the loop if 'q' is entered
        }

        if (op != 'p') {
            cout << "Enter second number: " << endl;
            cin >> number2;
        } else {
            cout << "Enter value of percent: ";
            cin >> number2;
        }

        switch (op) {
            case ('+'):
                cout << "addition is : " << number1 + number2;
                break;
            case ('-'):
                cout << "subtraction is : " << number1 - number2;
                break;
            case ('*'):
                cout << "multiplication is : " << number1 * number2;
                break;
            case ('p'):
                cout << "percent is : " << (number1 * number2) / 100;
                break;
            case ('/'):
                if (number2 == 0) {
                    cout << "not divisible" << endl;
                } else {
                    cout << "division is : " << number1 / number2;
                }
                break;
            case ('%'):
                cout << "remainder is : " << number1 % number2;
                break;
            default:
                cout << "invalid operator entered";
        }
        cout << endl;
    }

    return 0;
}