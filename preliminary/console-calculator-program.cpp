#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using ch = char;
using db = double;

int main()
{
    ch op;
    db num1;
    db num2;
    db res;

    cout << "Enter the operation ( + - / *) : ";
    cin >> op;

    cout << "Enter number 1 : ";
    cin >> num1;

    cout << "Enter number 2 : ";
    cin >> num2;

    switch(op){
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2 << endl;
            cout << num2 / num1;
            break;

        default:
            cout << "Enter a valid operation please.";
            break;

    }

    return 0;
}