#include <iostream>
using std::cout;
using std::cin;
using std::endl;

using ch = char;

int main()
{
    ch something;
    cout << "What letter grade? : ";
    cin >> something;

    switch(something){
        case 'A':
            cout << "You entered A." << endl;
            break;
        case 'B':
            cout << "You entered B." << endl;
            break;
        case 'C':
            cout << "You entered C." << endl;
            break;
            // Add more cases for other letters as needed
        default:
            cout << "You entered a letter other than A-Z." << endl;
            break;
    }

    return 0;
}
